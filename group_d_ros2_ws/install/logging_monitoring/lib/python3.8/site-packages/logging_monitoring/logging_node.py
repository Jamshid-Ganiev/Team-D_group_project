#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64

class LoggingNode(Node):
    def __init__(self):
        super().__init__('logging_node')
        self.battery_subscriber = self.create_subscription(
            Float64,
            '/turtlebot3/battery_level',  
            self.battery_callback,
            10  
        )

    def battery_callback(self, msg):
        battery_level = msg.data
        self.get_logger().info(f'Battery Level: {battery_level}%')

def main(args=None):
    rclpy.init(args=args)
    logging_node = LoggingNode()
    rclpy.spin(logging_node)
    logging_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
