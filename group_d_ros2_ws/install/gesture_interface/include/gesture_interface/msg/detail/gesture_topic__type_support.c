// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gesture_interface/msg/detail/gesture_topic__rosidl_typesupport_introspection_c.h"
#include "gesture_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gesture_interface/msg/detail/gesture_topic__functions.h"
#include "gesture_interface/msg/detail/gesture_topic__struct.h"


// Include directives for member types
// Member `linear_motion`
// Member `angular_motion`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gesture_interface__msg__GestureTopic__init(message_memory);
}

void GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_fini_function(void * message_memory)
{
  gesture_interface__msg__GestureTopic__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_member_array[2] = {
  {
    "linear_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gesture_interface__msg__GestureTopic, linear_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gesture_interface__msg__GestureTopic, angular_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_members = {
  "gesture_interface__msg",  // message namespace
  "GestureTopic",  // message name
  2,  // number of fields
  sizeof(gesture_interface__msg__GestureTopic),
  GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_member_array,  // message members
  GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_init_function,  // function to initialize message memory (memory has to be allocated)
  GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_type_support_handle = {
  0,
  &GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gesture_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gesture_interface, msg, GestureTopic)() {
  if (!GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_type_support_handle.typesupport_identifier) {
    GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GestureTopic__rosidl_typesupport_introspection_c__GestureTopic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
