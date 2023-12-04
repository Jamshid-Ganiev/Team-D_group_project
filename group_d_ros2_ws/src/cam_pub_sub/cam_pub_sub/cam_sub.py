import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import cv2

class VideoSubscriber(Node):
    def __init__(self):
        super().__init__('video_subscriber')
        self.subscription = self.create_subscription(  ## subscrbing from cam_sub to 'image_topic'
            Image,
            'image_topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.br = CvBridge()

    def listener_callback(self, msg):
        # pytest for ensuring nothing is wrong
        try:
            cv_image = self.br.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        except CvBridgeError as e:
            self.get_logger().error('CvBridgeError: {}'.format(e))
            return

        # Process the frame (e.g., display it)
        cv2.imshow("Video Frame", cv_image) ## display the received image
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    video_subscriber = VideoSubscriber()
    rclpy.spin(video_subscriber)
    video_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
