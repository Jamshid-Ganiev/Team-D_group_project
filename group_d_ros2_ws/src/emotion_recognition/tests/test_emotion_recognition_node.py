# Done by Vakhitov Akbarali 12200312

import pytest
from emotion_recognition.emotion_recognition_node import EmotionRecognitionNode

def test_emotion_recognition_node_creation():
    emotion_node = EmotionRecognitionNode()
    assert emotion_node is not None
