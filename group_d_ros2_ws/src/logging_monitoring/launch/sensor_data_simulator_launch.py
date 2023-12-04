from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='logging_monitoring',
            executable='sensor_data_simulator.py',  
            name='sensor_data_simulator'
        ),
    ])

