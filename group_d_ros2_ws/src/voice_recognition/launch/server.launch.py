from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='voice_recognition',
            executable='server_node',
            name='server_node',
            output='screen',
        ),
    ])

