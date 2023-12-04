#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from logging_monitoring.msg import EmotionStatus 

class EmotionRecognitionMonitorNode(Node):
    def __init__(self):
        super().__init__('emotion_recognition_monitor_node')
        self.emotion_subscriber = self.create_subscription(
            EmotionStatus,  
            '/emotion_recognition/status',  
            self.emotion_callback,
            10  
        )

    def emotion_callback(self, msg):

        emotion_status = msg.status
        self.get_logger().info(f'Emotion Recognition Status: {emotion_status}')

def main(args=None):
    rclpy.init(args=args)
    emotion_recognition_monitor_node = EmotionRecognitionMonitorNode()
    rclpy.spin(emotion_recognition_monitor_node)
    emotion_recognition_monitor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
