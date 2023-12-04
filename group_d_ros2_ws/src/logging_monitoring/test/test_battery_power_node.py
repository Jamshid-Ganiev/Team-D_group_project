# tests/test_battery_power_node.py
import subprocess

def test_battery_power_node():
    result = subprocess.run(['python', 'cli.py', 'battery_power'], capture_output=True, text=True)
    assert 'Battery Power Node' in result.stdout
    assert result.returncode == 0
