// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gesture_interface/msg/detail/gesture_topic__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gesture_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GestureTopic_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gesture_interface::msg::GestureTopic(_init);
}

void GestureTopic_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gesture_interface::msg::GestureTopic *>(message_memory);
  typed_message->~GestureTopic();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GestureTopic_message_member_array[2] = {
  {
    "linear_motion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gesture_interface::msg::GestureTopic, linear_motion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_motion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gesture_interface::msg::GestureTopic, angular_motion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GestureTopic_message_members = {
  "gesture_interface::msg",  // message namespace
  "GestureTopic",  // message name
  2,  // number of fields
  sizeof(gesture_interface::msg::GestureTopic),
  GestureTopic_message_member_array,  // message members
  GestureTopic_init_function,  // function to initialize message memory (memory has to be allocated)
  GestureTopic_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GestureTopic_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GestureTopic_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gesture_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gesture_interface::msg::GestureTopic>()
{
  return &::gesture_interface::msg::rosidl_typesupport_introspection_cpp::GestureTopic_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gesture_interface, msg, GestureTopic)() {
  return &::gesture_interface::msg::rosidl_typesupport_introspection_cpp::GestureTopic_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
