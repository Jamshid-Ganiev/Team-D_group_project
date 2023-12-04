// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__STRUCT_HPP_
#define CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image_data'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cam_interface__msg__CamTopic __attribute__((deprecated))
#else
# define DEPRECATED__cam_interface__msg__CamTopic __declspec(deprecated)
#endif

namespace cam_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CamTopic_
{
  using Type = CamTopic_<ContainerAllocator>;

  explicit CamTopic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_data(_init)
  {
    (void)_init;
  }

  explicit CamTopic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_data_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_data_type image_data;

  // setters for named parameter idiom
  Type & set__image_data(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cam_interface::msg::CamTopic_<ContainerAllocator> *;
  using ConstRawPtr =
    const cam_interface::msg::CamTopic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cam_interface::msg::CamTopic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cam_interface::msg::CamTopic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cam_interface::msg::CamTopic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cam_interface::msg::CamTopic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cam_interface::msg::CamTopic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cam_interface::msg::CamTopic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cam_interface::msg::CamTopic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cam_interface::msg::CamTopic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cam_interface__msg__CamTopic
    std::shared_ptr<cam_interface::msg::CamTopic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cam_interface__msg__CamTopic
    std::shared_ptr<cam_interface::msg::CamTopic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CamTopic_ & other) const
  {
    if (this->image_data != other.image_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CamTopic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CamTopic_

// alias to use template instance with default allocator
using CamTopic =
  cam_interface::msg::CamTopic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cam_interface

#endif  // CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__STRUCT_HPP_
