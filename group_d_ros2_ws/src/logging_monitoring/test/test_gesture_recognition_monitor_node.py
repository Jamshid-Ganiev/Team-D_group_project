# tests/test_gesture_recognition_monitor_node.py
import subprocess

def test_gesture_recognition_monitor_node():
    result = subprocess.run(['python', 'cli.py', 'gesture_recognition'], capture_output=True, text=True)
    assert 'Gesture Recognition Monitor Node' in result.stdout
    assert result.returncode == 0
