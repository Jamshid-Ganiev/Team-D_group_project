from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Define the first node: cam_pub
    cam_pub_node = Node(
        package='cam_pub_sub',       # Name of the package
        executable='cam_pub',        # Name of the executable
        name='cam_pub_node',         # Node name
        output='screen'              # Output option
    )

    # Define the second node: cam_sub
    cam_sub_node = Node(
        package='cam_pub_sub',       # Name of the package
        executable='cam_sub',        # Name of the executable
        name='cam_sub_node',         # Node name
        output='screen'              # Output option
    )

    # Create and return a LaunchDescription object with both nodes
    return LaunchDescription([
        cam_pub_node,
        cam_sub_node
    ])

