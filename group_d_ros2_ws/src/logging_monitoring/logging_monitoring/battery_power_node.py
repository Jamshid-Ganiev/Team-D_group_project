#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import BatteryState

class BatteryPowerNode(Node):
    def __init__(self):
        super().__init__('battery_power_node')
        self.battery_state_subscriber = self.create_subscription(
            BatteryState,
            '/battery_state',  
            self.battery_state_callback,
            10
        )

    def battery_state_callback(self, msg):
        # Process battery state data here
        self.get_logger().info(f'Received battery state: {msg}')

def main(args=None):
    rclpy.init(args=args)
    battery_power_node = BatteryPowerNode()
    rclpy.spin(battery_power_node)
    battery_power_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
