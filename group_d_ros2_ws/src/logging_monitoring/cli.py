#!/usr/bin/env python3

import click
import subprocess

@click.group()
def cli():
    pass

@click.command()
def battery_power():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'battery_power_node.py'])

@click.command()
def emotion_recognition():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'emotion_recognition.py'])

@click.command()
def gesture_recognition():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'gesture_recognition_monitor_node.py'])

@click.command()
def logging():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'logging_node.py'])

@click.command()
def obstacle_avoidance():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'obstacle_avoidance.py'])

@click.command()
def sensor_data_simulator():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'sensor_data_simulator.py'])

@click.command()
def voice_recognition():
    subprocess.run(['ros2', 'run', 'logging_monitoring', 'voice_recognition_monitor_node.py'])

cli.add_command(battery_power)
cli.add_command(emotion_recognition)
cli.add_command(gesture_recognition)
cli.add_command(logging)
cli.add_command(obstacle_avoidance)
cli.add_command(sensor_data_simulator)
cli.add_command(voice_recognition)

if __name__ == '__main__':
    cli()
