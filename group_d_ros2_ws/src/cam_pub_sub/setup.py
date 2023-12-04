from setuptools import find_packages, setup

package_name = 'cam_pub_sub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/cam_launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='akash',
    maintainer_email='ghimireakash819@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'cam_pub=cam_pub_sub.cam_pub:main',
            'cam_sub=cam_pub_sub.cam_sub:main'

        ],
    },
)
