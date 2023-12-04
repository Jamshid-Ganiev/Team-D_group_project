import rclpy
from rclpy.node import Node
from gesture_interface.msg import GestureTopic
from geometry_msgs.msg import Twist

class GestureControlNode(Node):
    def __init__(self):
        super().__init__('gesture_control_node')
        self.twist_publisher = self.create_publisher(
            Twist, 'turtle1/cmd_vel', 10)
        self.twist_msg = Twist()

    def gesture_callback(self, GestureTopic):
        
        
        linear_motion = GestureTopic.linear_motion
        angular_motion = GestureTopic.angular_motion

        # Handle linear motion
        if linear_motion == 'forward':
            self.twist_msg.linear.x = 1.0  # Adjust value as needed
        elif linear_motion == 'backward':
            self.twist_msg.linear.x = -1.0  # Adjust value as needed
        elif linear_motion == 'stop':
            self.twist_msg.linear.x = 0.0

        # Handle angular motion
        if angular_motion == 'left':
            self.twist_msg.angular.z = 1.0  # Adjust value as needed
        elif angular_motion == 'right':
            self.twist_msg.angular.z = -1.0  # Adjust value as needed
        elif angular_motion == 'stop':
            self.twist_msg.angular.z = 0.0

        # Debugging log
        self.get_logger().info(f"Linear: {self.twist_msg.linear.x}, Angular: {self.twist_msg.angular.z}")

        # Publish the Twist message
        self.twist_publisher.publish(self.twist_msg)

def main(args=None):
    rclpy.init(args=args)
    gesture_control_node = GestureControlNode()
    gesture_control_node.create_subscription(
        GestureTopic, 'gesture_topic', gesture_control_node.gesture_callback, 10)
    rclpy.spin(gesture_control_node)
    gesture_control_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
