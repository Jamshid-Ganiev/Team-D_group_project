// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cam_interface/msg/detail/cam_topic__rosidl_typesupport_introspection_c.h"
#include "cam_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cam_interface/msg/detail/cam_topic__functions.h"
#include "cam_interface/msg/detail/cam_topic__struct.h"


// Include directives for member types
// Member `image_data`
#include "sensor_msgs/msg/image.h"
// Member `image_data`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CamTopic__rosidl_typesupport_introspection_c__CamTopic_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cam_interface__msg__CamTopic__init(message_memory);
}

void CamTopic__rosidl_typesupport_introspection_c__CamTopic_fini_function(void * message_memory)
{
  cam_interface__msg__CamTopic__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_member_array[1] = {
  {
    "image_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__CamTopic, image_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_members = {
  "cam_interface__msg",  // message namespace
  "CamTopic",  // message name
  1,  // number of fields
  sizeof(cam_interface__msg__CamTopic),
  CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_member_array,  // message members
  CamTopic__rosidl_typesupport_introspection_c__CamTopic_init_function,  // function to initialize message memory (memory has to be allocated)
  CamTopic__rosidl_typesupport_introspection_c__CamTopic_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_type_support_handle = {
  0,
  &CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cam_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cam_interface, msg, CamTopic)() {
  CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_type_support_handle.typesupport_identifier) {
    CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CamTopic__rosidl_typesupport_introspection_c__CamTopic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
