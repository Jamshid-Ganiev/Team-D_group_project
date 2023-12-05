# Done by Vakhitov Akbarali 12200312 

from setuptools import find_packages, setup

package_name = 'emotion_recognition'

setup(
    name=package_name,
    version='0.0.0',
    packages=['emotion_recognition'],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Ali',
    maintainer_email='vahidovakbarali@gmail.com',
    keywords=['ROS'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
        ],
    description='ROS 2 Emotion Recognition Package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera_node = emotion_recognition.camera_node:main',
            'emotion_recognition_node = emotion_recognition.emotion_recognition_node:main',
            'emotion_cli = emotion_recognition.cli:cli'
        
        ],
    },
)
