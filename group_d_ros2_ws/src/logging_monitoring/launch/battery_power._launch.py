from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='logging_monitoring',
            executable='battery_power_node',
            name='battery_power_node',
        ),
    ])
