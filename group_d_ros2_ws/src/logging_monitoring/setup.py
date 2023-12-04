from setuptools import setup

package_name = 'logging_monitoring'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='adham',
    maintainer_email='adham@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'logging_node = logging_monitoring.logging_node:main',
            'sensor_data_node = logging_monitoring.sensor_data_node:main',
            'navigation_node = logging_monitoring.navigation_node:main',
            'system_health_node = logging_monitoring.system_health_node:main',
            'battery_power_node = logging_monitoring.battery_power_node:main',
            'error_warning_node = logging_monitoring.error_warning_node:main',
            'localization_mapping_node = logging_monitoring.localization_mapping_node:main',
        ],
    },
)
