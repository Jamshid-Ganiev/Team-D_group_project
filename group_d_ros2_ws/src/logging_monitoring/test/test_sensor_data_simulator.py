# tests/test_sensor_data_simulator.py
import subprocess

def test_sensor_data_simulator():
    result = subprocess.run(['python', 'cli.py', 'sensor_data_simulator'], capture_output=True, text=True)
    assert 'Sensor Data Simulator Node' in result.stdout
    assert result.returncode == 0
