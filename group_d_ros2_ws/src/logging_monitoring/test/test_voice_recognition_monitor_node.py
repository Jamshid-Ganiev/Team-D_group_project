# tests/test_voice_recognition_monitor_node.py
import subprocess

def test_voice_recognition_monitor_node():
    result = subprocess.run(['python', 'cli.py', 'voice_recognition'], capture_output=True, text=True)
    assert 'Voice Recognition Monitor Node' in result.stdout
    assert result.returncode == 0
