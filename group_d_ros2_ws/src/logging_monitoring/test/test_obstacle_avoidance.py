# tests/test_obstacle_avoidance.py
import subprocess

def test_obstacle_avoidance():
    result = subprocess.run(['python', 'cli.py', 'obstacle_avoidance'], capture_output=True, text=True)
    assert 'Obstacle Avoidance Node' in result.stdout
    assert result.returncode == 0
