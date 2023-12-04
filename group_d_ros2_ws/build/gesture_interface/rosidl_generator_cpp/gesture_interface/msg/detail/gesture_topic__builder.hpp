// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__BUILDER_HPP_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__BUILDER_HPP_

#include "gesture_interface/msg/detail/gesture_topic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gesture_interface
{

namespace msg
{

namespace builder
{

class Init_GestureTopic_angular_motion
{
public:
  explicit Init_GestureTopic_angular_motion(::gesture_interface::msg::GestureTopic & msg)
  : msg_(msg)
  {}
  ::gesture_interface::msg::GestureTopic angular_motion(::gesture_interface::msg::GestureTopic::_angular_motion_type arg)
  {
    msg_.angular_motion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gesture_interface::msg::GestureTopic msg_;
};

class Init_GestureTopic_linear_motion
{
public:
  Init_GestureTopic_linear_motion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GestureTopic_angular_motion linear_motion(::gesture_interface::msg::GestureTopic::_linear_motion_type arg)
  {
    msg_.linear_motion = std::move(arg);
    return Init_GestureTopic_angular_motion(msg_);
  }

private:
  ::gesture_interface::msg::GestureTopic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gesture_interface::msg::GestureTopic>()
{
  return gesture_interface::msg::builder::Init_GestureTopic_linear_motion();
}

}  // namespace gesture_interface

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__BUILDER_HPP_
