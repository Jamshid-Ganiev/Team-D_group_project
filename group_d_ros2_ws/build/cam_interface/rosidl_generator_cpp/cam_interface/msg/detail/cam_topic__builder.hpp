// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__BUILDER_HPP_
#define CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__BUILDER_HPP_

#include "cam_interface/msg/detail/cam_topic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cam_interface
{

namespace msg
{

namespace builder
{

class Init_CamTopic_image_data
{
public:
  Init_CamTopic_image_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cam_interface::msg::CamTopic image_data(::cam_interface::msg::CamTopic::_image_data_type arg)
  {
    msg_.image_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cam_interface::msg::CamTopic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cam_interface::msg::CamTopic>()
{
  return cam_interface::msg::builder::Init_CamTopic_image_data();
}

}  // namespace cam_interface

#endif  // CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__BUILDER_HPP_
