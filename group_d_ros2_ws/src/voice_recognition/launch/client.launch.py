from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='voice_recognition',
            executable='socket_communication_node',
            name='socket_communication_node',
            output='screen',
        ),
    ])

