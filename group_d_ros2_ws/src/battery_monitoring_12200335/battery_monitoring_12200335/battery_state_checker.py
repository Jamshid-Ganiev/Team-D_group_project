import rclpy
from rclpy.node import Node
from sensor_msgs.msg import BatteryState
import math
import click

"""
    This function was made by Jamshidjon Ganiev | 12200335
"""

class BatteryStateChecker(Node):
    def __init__(self, topic_name):
        super().__init__('battery_state_checker')
        self.subscription = self.create_subscription(
            BatteryState,
            topic_name,
            self.battery_state_callback,
            10)
        self.timer = self.create_timer(30.0, self.timer_callback)
        self.initial_print_done = False
        self.last_battery_percentage = None

    def battery_state_callback(self, msg):
        # Extracting relevant information from the BatteryState message
        battery_percentage = math.floor(msg.percentage)
        charging_state = self.get_charging_state(battery_percentage)

        # Prints initial battery information only once
        if not self.initial_print_done:
            self.get_logger().info(f"Initial Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"Initial Charging State: {charging_state}\n")
            self.initial_print_done = True

        self.last_battery_percentage = battery_percentage

    def get_charging_state(self, current_percentage):
        # Compares with the previous battery percentage to determine charging state
        if (self.last_battery_percentage is not None) and (current_percentage > (self.last_battery_percentage - 1)):
            return "yes"
        else:
            return "no"

    def timer_callback(self):
        # Prints updated battery info every 30 seconds
        if self.initial_print_done and hasattr(self, 'last_battery_percentage'):
            battery_percentage = self.last_battery_percentage
            charging_state = self.get_charging_state(battery_percentage)

            self.get_logger().info("Updated battery info:")
            self.get_logger().info(f"1- Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"2- Charging State: {charging_state}\n")

            # Resetting the timer for the next update
            self.timer.reset()

@click.command()
@click.option('--topic', default='/battery_state', help='ROS topic name for battery state')
def main(topic):
    rclpy.init()

    try:
        battery_state_checker = BatteryStateChecker(topic)
        rclpy.spin(battery_state_checker)
    except KeyboardInterrupt:
        pass
    finally:
        battery_state_checker.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
