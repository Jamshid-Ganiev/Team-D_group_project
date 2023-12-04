import rclpy
from rclpy.node import Node
import socket

class SocketCommunicationNode(Node):
    def __init__(self):
        super().__init__('socket_communication_node')
        self.client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.server_ip = 'YOUR_SERVER_IP'
        self.server_port = 9880

        self.connect_to_server()
        self.get_data()

    def connect_to_server(self):
        self.client_socket.connect((self.server_ip, self.server_port))
        self.get_logger().info(f"Connected to {self.server_ip}:{self.server_port}")

    def get_data(self):
        result = self.client_socket.recv(1024)
        data = result.decode('utf-8')
        self.get_logger().info(f"Result from SERVER: {data}")

    def close_socket(self):
        self.client_socket.close()
        self.get_logger().info("Socket closed")

def main(args=None):
    rclpy.init(args=args)
    socket_communication_node = SocketCommunicationNode()
    rclpy.spin_once(socket_communication_node, timeout_sec=1)
    socket_communication_node.close_socket()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

