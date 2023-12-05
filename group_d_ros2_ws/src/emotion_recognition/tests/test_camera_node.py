# Done by Vakhitov Akbarali 12200312

import pytest
from emotion_recognition.camera_node import CameraNode

def test_camera_node_creation():
    camera_node = CameraNode()
    assert camera_node is not None
