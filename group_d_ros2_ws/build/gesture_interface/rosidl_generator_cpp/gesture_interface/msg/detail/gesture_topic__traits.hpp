// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__TRAITS_HPP_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__TRAITS_HPP_

#include "gesture_interface/msg/detail/gesture_topic__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gesture_interface::msg::GestureTopic>()
{
  return "gesture_interface::msg::GestureTopic";
}

template<>
inline const char * name<gesture_interface::msg::GestureTopic>()
{
  return "gesture_interface/msg/GestureTopic";
}

template<>
struct has_fixed_size<gesture_interface::msg::GestureTopic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gesture_interface::msg::GestureTopic>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gesture_interface::msg::GestureTopic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__TRAITS_HPP_
