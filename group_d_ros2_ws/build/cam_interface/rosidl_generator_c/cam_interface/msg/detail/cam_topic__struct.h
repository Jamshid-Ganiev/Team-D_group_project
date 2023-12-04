// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__STRUCT_H_
#define CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image_data'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/CamTopic in the package cam_interface.
typedef struct cam_interface__msg__CamTopic
{
  sensor_msgs__msg__Image image_data;
} cam_interface__msg__CamTopic;

// Struct for a sequence of cam_interface__msg__CamTopic.
typedef struct cam_interface__msg__CamTopic__Sequence
{
  cam_interface__msg__CamTopic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cam_interface__msg__CamTopic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__STRUCT_H_
