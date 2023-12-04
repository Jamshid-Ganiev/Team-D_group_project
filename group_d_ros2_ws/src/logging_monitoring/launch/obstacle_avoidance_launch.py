from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='logging_monitoring',  
            executable='obstacle_avoidance.py',
            name='obstacle_avoidance_monitor_node'
        ),
        Node(
            package='logging_monitoring',  
            executable='logging_node.py',
            name='logging_node'
        ),
    ])
