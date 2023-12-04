#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from logging_monitoring.msg import ObstacleStatus 

class ObstacleAvoidanceMonitorNode(Node):
    def __init__(self):
        super().__init__('obstacle_avoidance_monitor_node')
        self.obstacle_subscriber = self.create_subscription(
            ObstacleStatus,  
            '/obstacle_avoidance/status',  
            self.obstacle_callback,
            10  
        )

    def obstacle_callback(self, msg):
        
        obstacle_status = msg.status
        self.get_logger().info(f'Obstacle Avoidance Status: {obstacle_status}')

def main(args=None):
    rclpy.init(args=args)
    obstacle_avoidance_monitor_node = ObstacleAvoidanceMonitorNode()
    rclpy.spin(obstacle_avoidance_monitor_node)
    obstacle_avoidance_monitor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
