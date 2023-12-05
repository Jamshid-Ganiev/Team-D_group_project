# Done by Vakhitov Akbarali 12200312 

import rclpy
from sensor_msgs.msg import Image
from std_msgs.msg import Header
import cv2
from cv_bridge import CvBridge
import time
from rclpy.node import Node

class CameraNode(rclpy.Node):  # Inherits from rclpy.Node
    def __init__(self):
        super().__init__('camera_node')  # Call the super constructor
        self.image_publisher = self.create_publisher(Image, 'image_topic', 10)
        self.timer = self.create_timer(1, self.capture_image)
        self.bridge = CvBridge()

    def capture_image(self):
        # Captures real-time image using OpenCV 
        image = cv2.imread(0)

        # Converts OpenCV image to ROS Image message
        header = Header(stamp=self.get_clock().now().to_msg(), frame_id='camera_frame')
        ros_image = self.bridge.cv2_to_imgmsg(image, 'bgr8')

        # Publishes the image
        self.image_publisher.publish(ros_image)

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    try:
        rclpy.spin(camera_node)
    except KeyboardInterrupt:
        pass
    finally:
        camera_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

