from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='logging_monitoring',  
            executable='gesture_recognition_monitor_node.py',  
            name='gesture_recognition_monitor_node'
        ),
    ])
