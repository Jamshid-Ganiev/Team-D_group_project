import click
from emotion_recognition.camera_node import CameraNode
from emotion_recognition.emotion_recognition_node import EmotionRecognitionNode
import rclpy

@click.group()
def cli():
    pass

@cli.command()
def start_camera():
    rclpy.init()
    camera_node = CameraNode()
    try:
        rclpy.spin(camera_node)
    finally:
        camera_node.destroy_node()
        rclpy.shutdown()

@cli.command()
def start_emotion_recognition():
    rclpy.init()
    emotion_node = EmotionRecognitionNode()
    try:
        rclpy.spin(emotion_node)
    finally:
        emotion_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    cli()
