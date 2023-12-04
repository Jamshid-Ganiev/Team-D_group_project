from setuptools import find_packages, setup

package_name = 'gesture_pub_sub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/gesture_turtlesim_launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='akash',
    maintainer_email='akash@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'gesture_publisher=gesture_pub_sub.ges_pub:main',
            'gesture_subscriber=gesture_pub_sub.ges_sub_turtlesim:main'
        ],
    },
)
