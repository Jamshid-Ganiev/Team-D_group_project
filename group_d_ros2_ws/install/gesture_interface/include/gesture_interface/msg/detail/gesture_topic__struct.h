// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__STRUCT_H_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear_motion'
// Member 'angular_motion'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/GestureTopic in the package gesture_interface.
typedef struct gesture_interface__msg__GestureTopic
{
  rosidl_runtime_c__String linear_motion;
  rosidl_runtime_c__String angular_motion;
} gesture_interface__msg__GestureTopic;

// Struct for a sequence of gesture_interface__msg__GestureTopic.
typedef struct gesture_interface__msg__GestureTopic__Sequence
{
  gesture_interface__msg__GestureTopic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gesture_interface__msg__GestureTopic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__STRUCT_H_
