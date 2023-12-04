# Import necessary modules for ROS2 launch
from launch import LaunchDescription
from launch_ros.actions import Node

# Define a function that will generate the launch description
def generate_launch_description():
    # Define a ROS2 Node for the gesture publisher
    gesture_publisher_node = Node(
        package='gesture_pub_sub',  # Name of the package where the node is located
        executable='gesture_publisher',  # Name of the executable to run
        name='gesture_publisher',  # The name of the node
        output='screen'  # Where to output the node's logs
    )

    # Define a ROS2 Node for the gesture subscriber
    gesture_subscriber_node = Node(
        package='gesture_pub_sub',  # Name of the package where the node is located
        executable='gesture_subscriber',  # Name of the executable to run
        name='gesture_subscriber',  # The name of the node
        output='screen'  # Where to output the node's logs
    )

    # Define a ROS2 Node for turtlesim
    turtlesim_node = Node(
        package='turtlesim',  # Name of the package where the node is located
        executable='turtlesim_node',  # Name of the executable to run
        name='turtlesim',  # The name of the node
        output='screen'  # Where to output the node's logs
    )

    # Return a LaunchDescription object that launches all three nodes
    return LaunchDescription([
        gesture_publisher_node,  # Add the gesture publisher node to the launch description
        gesture_subscriber_node,  # Add the gesture subscriber node to the launch description
        turtlesim_node  # Add the turtlesim node to the launch description
    ])
