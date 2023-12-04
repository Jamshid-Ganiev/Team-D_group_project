// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice
#include "gesture_interface/msg/detail/gesture_topic__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gesture_interface/msg/detail/gesture_topic__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear_motion
  cdr << ros_message.linear_motion;
  // Member: angular_motion
  cdr << ros_message.angular_motion;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gesture_interface::msg::GestureTopic & ros_message)
{
  // Member: linear_motion
  cdr >> ros_message.linear_motion;

  // Member: angular_motion
  cdr >> ros_message.angular_motion;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
get_serialized_size(
  const gesture_interface::msg::GestureTopic & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear_motion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.linear_motion.size() + 1);
  // Member: angular_motion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.angular_motion.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gesture_interface
max_serialized_size_GestureTopic(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: linear_motion
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: angular_motion
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GestureTopic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gesture_interface::msg::GestureTopic *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GestureTopic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gesture_interface::msg::GestureTopic *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GestureTopic__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gesture_interface::msg::GestureTopic *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GestureTopic__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GestureTopic(full_bounded, 0);
}

static message_type_support_callbacks_t _GestureTopic__callbacks = {
  "gesture_interface::msg",
  "GestureTopic",
  _GestureTopic__cdr_serialize,
  _GestureTopic__cdr_deserialize,
  _GestureTopic__get_serialized_size,
  _GestureTopic__max_serialized_size
};

static rosidl_message_type_support_t _GestureTopic__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GestureTopic__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gesture_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gesture_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<gesture_interface::msg::GestureTopic>()
{
  return &gesture_interface::msg::typesupport_fastrtps_cpp::_GestureTopic__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gesture_interface, msg, GestureTopic)() {
  return &gesture_interface::msg::typesupport_fastrtps_cpp::_GestureTopic__handle;
}

#ifdef __cplusplus
}
#endif
