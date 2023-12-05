# done by Vakhitov Akbarali 12200312

cmake_minimum_required(VERSION 3.5)
project(emotion_recognition)

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)


ament_python_install_package(${PROJECT_NAME})

include_directories(include)

add_executable(camera_node src/camera_node.py)
ament_target_dependencies(camera_node
  rclpy
  std_msgs
  sensor_msgs
)

add_executable(emotion_recognition_node src/emotion_recognition_node.py)
ament_target_dependencies(emotion_recognition_node
  rclpy
  std_msgs
  sensor_msgs
)

install(PROGRAMS
  src/camera_node.py
  src/emotion_recognition_node.py
  DESTINATION lib/${PROJECT_NAME}
)

#install(TARGETS
 # camera_node
  #emotion_recognition_node
  #DESTINATION lib/${PROJECT_NAME}
#)

ament_package()
