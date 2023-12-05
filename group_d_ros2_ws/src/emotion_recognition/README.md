# 12200312 Vakhitov Akbarali's part

# Emotion Recognition Package

The Emotion Recognition Package is designed to provide emotion recognition capabilities to enhance the functionality of a ROS 2 TurtleBot. This package can be integrated into a larger project aimed at creating an assistant for elderly people.

## Overview

The package includes two main nodes: `camera_node` and `emotion_recognition_node`. The `camera_node` captures real-time images and publishes them, while the `emotion_recognition_node` processes the images to recognize emotions.

## Installation

1. Make sure you have ROS 2 installed on your system.

2. Clone this repository into your ROS 2 workspace:

```
    cd <your_ros2_ws>/src
    git clone <repository_url>
```
3. Build the package:
```
 colcon build --packages-select emotion_recognition
```

## Usage

### Start Camera Node

```bash
ros2 run emotion_recognition camera_node
```

The camera_node captures real-time images and publishes them to the 'image_topic'.

### Start Emotion Recognition Node

```
ros2 run emotion_recognition emotion_recognition_node
```
The emotion_recognition_node subscribes to the 'image_topic', processes the images, and recognizes emotions.

## CLI Commands
Additionally, you can use the following CLI commands to start the nodes:

```
ros2 run emotion_recognition emotion_cli start_camera
ros2 run emotion_recognition emotion_cli start_emotion_recognition
```
## Advanced Configuration
### Gesture-Based HCI

This package gets integrated into gesture-based Human-Computer Interaction (HCI), specifically with the appropriate nodes and gestures.


```
# Example gesture-based HCI integration
# Necessary imports and configurations
from emotion_recognition.gesture_node import GestureNode

gesture_node = GestureNode()
```
## Testing

The package includes simple test cases. Run the tests using:
```
pytest
```

## Acknowledgments

This package is developed as part of the ROS 2 TurtleBot Assistant project for elderly assistance.
