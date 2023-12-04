#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64

import random
import time

class SensorDataSimulator(Node):
    def __init__(self):
        super().__init__('sensor_data_simulator')
        self.sensor_publisher = self.create_publisher(Float64, '/sensor_data', 10)

    def publish_sensor_data(self):
        while rclpy.ok():
            sensor_value = random.uniform(0.0, 100.0)  # Simulating a sensor value between 0 and 100
            msg = Float64()
            msg.data = sensor_value
            self.sensor_publisher.publish(msg)
            self.get_logger().info(f'Simulated Sensor Data: {sensor_value}')
            time.sleep(1)  # Simulate updating every 1 second

def main(args=None):
    rclpy.init(args=args)
    sensor_data_simulator = SensorDataSimulator()
    try:
        sensor_data_simulator.publish_sensor_data()
    except KeyboardInterrupt:
        pass
    sensor_data_simulator.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

