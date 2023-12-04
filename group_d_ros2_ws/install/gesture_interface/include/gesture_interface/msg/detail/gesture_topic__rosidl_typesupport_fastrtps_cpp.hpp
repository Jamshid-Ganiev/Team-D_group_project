// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gesture_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "gesture_interface/msg/detail/gesture_topic__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace gesture_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
cdr_serialize(
  const gesture_interface::msg::GestureTopic & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gesture_interface::msg::GestureTopic & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
get_serialized_size(
  const gesture_interface::msg::GestureTopic & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
max_serialized_size_GestureTopic(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gesture_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gesture_interface, msg, GestureTopic)();

#ifdef __cplusplus
}
#endif

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
