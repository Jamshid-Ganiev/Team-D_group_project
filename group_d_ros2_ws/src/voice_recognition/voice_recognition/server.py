import rclpy
from rclpy.node import Node
import socket

class ServerNode(Node):
    def __init__(self):
        super().__init__('server_node')
        self.server_ip = 'YOUR_SERVER_IP'
        self.server_port = 9880
        self.send_message("Hello, client!")

    def send_message(self, message):
        # Create a socket
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

        # Bind the socket to the server address
        server_socket.bind((self.server_ip, self.server_port))

        # Listen for incoming connections (max 1 connection in this example)
        server_socket.listen(1)
        self.get_logger().info(f"Server listening on {self.server_ip}:{self.server_port}")

        # Accept a connection from the client
        client_socket, client_address = server_socket.accept()
        self.get_logger().info(f"Connection established with {client_address}")
        
        try:
            result = message
            client_socket.send(result.encode('utf-8'))
            self.get_logger().info(result)
        finally:
            client_socket.close()
            server_socket.close()

def main(args=None):
    rclpy.init(args=args)
    server_node = ServerNode()
    rclpy.spin_once(server_node, timeout_sec=1)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

