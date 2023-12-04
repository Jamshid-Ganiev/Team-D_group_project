# Done by Vakhitov Akbarali 12200312 

import rclpy
from std_msgs.msg import String
from emotion.msg import Emotion
from deepface import DeepFace
from cv_bridge import CvBridge
import cv2

class EmotionRecognitionNode:
    def __init__(self):
        self.node = rclpy.create_node('emotion_recognition_node')
        self.image_subscription = self.node.create_subscription(
            Image,
            'image_topic',
            self.process_image,
            10
        )
        self.emotion_publisher = self.node.create_publisher(Emotion, 'emotion_topic', 10)
        self.bridge = CvBridge()

    def process_image(self, msg):
        # Converts ROS Image message to OpenCV image
        cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

        # Performs emotion recognition using DeepFace 
        result = DeepFace.analyze(cv_image, actions=['emotion'])

        # Extracts emotion and intensity
        emotion = result['dominant_emotion']
        intensity = result[emotion.lower()]

        # Publishes the recognized emotion
        emotion_msg = Emotion(emotion_type=emotion, intensity=intensity)
        self.emotion_publisher.publish(emotion_msg)


def main(args=None):
    rclpy.init(args=args)
    emotion_node = EmotionRecognitionNode()
    rclpy.spin(emotion_node)
    emotion_node.node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
