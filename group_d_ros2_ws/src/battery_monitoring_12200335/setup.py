import os
from glob import glob
from setuptools import setup

package_name = 'battery_monitoring_12200335'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Jamshid Ganiev',
    maintainer_email='12200335@inha.edu',
    description='Battery monitoring script, subscribing to a custom battery state topic, and displaying percentage and charging status.',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'battery_checker = battery_monitoring_12200335.battery_state_checker:main'
        ],
    },
)
