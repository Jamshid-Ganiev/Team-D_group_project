from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='emotion_recognition',
            executable='camera_node',
            name='camera_node',
            output='screen',
        ),
        Node(
            package='emotion_recognition',
            executable='emotion_recognition_node',
            name='emotion_recognition_node',
            output='screen',
        ),
    ])

