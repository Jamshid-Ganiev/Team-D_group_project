import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image

from cv_bridge import CvBridge
import cv2
import click 


class VideoPublisher(Node):
    def __init__(self,vdo_adr):
        super().__init__('video_publisher')
        # Create a ROS2 publisher object that will publish messages of type Image on the 'image_topic' with a queue size of 10
        self.publisher_ = self.create_publisher(Image, 'image_topic', 10)
        # Set up a timer to call the timer_callback method every 0.1 seconds
        self.timer = self.create_timer(0.1, self.timer_callback)
        # Create an instance of CvBridge which provides an interface between ROS2 and OpenCV
        self.br = CvBridge()
        # Store the address of the video file or stream to be used
        self.vdo_adr=vdo_adr
        # Initialize video capture with the given video address
        self.cap = cv2.VideoCapture(self.vdo_adr)  

    def timer_callback(self):
        # Read a frame from the video capture object
        ret, frame = self.cap.read()
        if ret:
            # Convert the OpenCV image to a ROS2 Image message
            msg = self.br.cv2_to_imgmsg(frame, encoding='bgr8')
            # Publish the image message to the topic
            self.publisher_.publish(msg)
        else:
            # If no frame is captured, log the information
            self.get_logger().info('No frame')
            
@click.command()
@click.option('--vdo_adr', default='video/test.mp4', help='Address of video file.')

def main(vdo_adr):
    try:
        # Initialize the ROS2 Python client library
        rclpy.init()
        # Create an instance of the VideoPublisher node with the video address
        video_publisher = VideoPublisher(vdo_adr)
        # Spin the node so the callback function is called
        rclpy.spin(video_publisher)
    except Exception as e:
        # If an exception occurs, print the error message
        print(f"An error occurred: {e}")
        pass  # Continue execution even if there's an error
    finally:
        # Ensure the node and ROS are shutdown properly when the script is stopped
        rclpy.shutdown()

# Entry point of the Python script, calling the main function if the script is run directly
if __name__ == '__main__':
    main()
