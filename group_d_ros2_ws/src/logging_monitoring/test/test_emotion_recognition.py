# tests/test_emotion_recognition.py
import subprocess

def test_emotion_recognition():
    result = subprocess.run(['python', 'cli.py', 'emotion_recognition'], capture_output=True, text=True)
    assert 'Emotion Recognition Node' in result.stdout
    assert result.returncode == 0
