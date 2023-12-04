#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from logging_monitoring.msg import GestureStatus  

class GestureRecognitionMonitorNode(Node):
    def __init__(self):
        super().__init__('gesture_recognition_monitor_node')
        self.gesture_subscriber = self.create_subscription(
            GestureStatus,  
            '/gesture_recognition/status', 
            self.gesture_callback,
            10  
        )

    def gesture_callback(self, msg):
       
        gesture_status = msg.status
        self.get_logger().info(f'Gesture Recognition Status: {gesture_status}')

def main(args=None):
    rclpy.init(args=args)
    gesture_recognition_monitor_node = GestureRecognitionMonitorNode()
    rclpy.spin(gesture_recognition_monitor_node)
    gesture_recognition_monitor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
