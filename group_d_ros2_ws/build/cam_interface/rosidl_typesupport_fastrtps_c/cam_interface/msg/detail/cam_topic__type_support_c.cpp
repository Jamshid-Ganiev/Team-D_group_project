// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice
#include "cam_interface/msg/detail/cam_topic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cam_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cam_interface/msg/detail/cam_topic__struct.h"
#include "cam_interface/msg/detail/cam_topic__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/image__functions.h"  // image_data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cam_interface
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cam_interface
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cam_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _CamTopic__ros_msg_type = cam_interface__msg__CamTopic;

static bool _CamTopic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CamTopic__ros_msg_type * ros_message = static_cast<const _CamTopic__ros_msg_type *>(untyped_ros_message);
  // Field name: image_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CamTopic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CamTopic__ros_msg_type * ros_message = static_cast<_CamTopic__ros_msg_type *>(untyped_ros_message);
  // Field name: image_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image_data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cam_interface
size_t get_serialized_size_cam_interface__msg__CamTopic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CamTopic__ros_msg_type * ros_message = static_cast<const _CamTopic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name image_data

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CamTopic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cam_interface__msg__CamTopic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cam_interface
size_t max_serialized_size_cam_interface__msg__CamTopic(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: image_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CamTopic__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cam_interface__msg__CamTopic(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CamTopic = {
  "cam_interface::msg",
  "CamTopic",
  _CamTopic__cdr_serialize,
  _CamTopic__cdr_deserialize,
  _CamTopic__get_serialized_size,
  _CamTopic__max_serialized_size
};

static rosidl_message_type_support_t _CamTopic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CamTopic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cam_interface, msg, CamTopic)() {
  return &_CamTopic__type_support;
}

#if defined(__cplusplus)
}
#endif
