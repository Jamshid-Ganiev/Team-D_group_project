# tests/test_logging_node.py
import subprocess

def test_logging_node():
    result = subprocess.run(['python', 'cli.py', 'logging'], capture_output=True, text=True)
    assert 'Logging Node' in result.stdout
    assert result.returncode == 0
