import pytest
import rclpy
from rclpy.qos import QoSProfile
from std_msgs.msg import Header
from sensor_msgs.msg import BatteryState
from your_module_name import BatteryStateChecker

@pytest.fixture
def ros_node():
    rclpy.init()
    node = rclpy.create_node('test_battery_state_checker')
    yield node
    node.destroy_node()
    rclpy.shutdown()

def test_battery_state_checker(ros_node):
    topic_name = '/test_battery_state'
    battery_state_checker = BatteryStateChecker(topic_name)
    qos_profile = QoSProfile(depth=10)

    # a publisher for testing
    publisher = ros_node.create_publisher(BatteryState, topic_name, qos_profile)

    # Simulaing a battery state message
    header = Header(stamp=ros_node.get_clock().now().to_msg())
    battery_state_msg = BatteryState(header=header, percentage=50.0)
    publisher.publish(battery_state_msg)

    # processing the callback
    rclpy.spin_once(ros_node, timeout_sec=1.0)

    # Checks if the initial print is done
    assert battery_state_checker.initial_print_done

    # Checks if the last battery percentage is updated
    assert battery_state_checker.last_battery_percentage == 50

    # Checks if the charging state is correct
    assert battery_state_checker.get_charging_state(51) == "yes"
    assert battery_state_checker.get_charging_state(49) == "no"

    # Checks if the timer callback works
    battery_state_checker.timer_callback()
    

if __name__ == '__main__':
    pytest.main()
