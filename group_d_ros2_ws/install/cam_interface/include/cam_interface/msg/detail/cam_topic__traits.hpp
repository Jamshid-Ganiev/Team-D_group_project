// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__TRAITS_HPP_
#define CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__TRAITS_HPP_

#include "cam_interface/msg/detail/cam_topic__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image_data'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cam_interface::msg::CamTopic>()
{
  return "cam_interface::msg::CamTopic";
}

template<>
inline const char * name<cam_interface::msg::CamTopic>()
{
  return "cam_interface/msg/CamTopic";
}

template<>
struct has_fixed_size<cam_interface::msg::CamTopic>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<cam_interface::msg::CamTopic>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<cam_interface::msg::CamTopic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__TRAITS_HPP_
