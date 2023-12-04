import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='battery_monitoring_12200335',
            executable='battery_checker',  
            name='battery_checker',
            output='screen',
            arguments=['--topic', '/battery_state']),
    ])
