#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from logging_monitoring.msg import VoiceStatus 
class VoiceRecognitionMonitorNode(Node):
    def __init__(self):
        super().__init__('voice_recognition_monitor_node')
        self.voice_subscriber = self.create_subscription(
            VoiceStatus,  
            '/voice_recognition/status',
            self.voice_callback,
            10  
        )

    def voice_callback(self, msg):
        
        voice_status = msg.status
        self.get_logger().info(f'Voice Recognition Status: {voice_status}')

def main(args=None):
    rclpy.init(args=args)
    voice_recognition_monitor_node = VoiceRecognitionMonitorNode()
    rclpy.spin(voice_recognition_monitor_node)
    voice_recognition_monitor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
