// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__STRUCT_HPP_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gesture_interface__msg__GestureTopic __attribute__((deprecated))
#else
# define DEPRECATED__gesture_interface__msg__GestureTopic __declspec(deprecated)
#endif

namespace gesture_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GestureTopic_
{
  using Type = GestureTopic_<ContainerAllocator>;

  explicit GestureTopic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_motion = "";
      this->angular_motion = "";
    }
  }

  explicit GestureTopic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_motion(_alloc),
    angular_motion(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_motion = "";
      this->angular_motion = "";
    }
  }

  // field types and members
  using _linear_motion_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _linear_motion_type linear_motion;
  using _angular_motion_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _angular_motion_type angular_motion;

  // setters for named parameter idiom
  Type & set__linear_motion(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->linear_motion = _arg;
    return *this;
  }
  Type & set__angular_motion(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->angular_motion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gesture_interface::msg::GestureTopic_<ContainerAllocator> *;
  using ConstRawPtr =
    const gesture_interface::msg::GestureTopic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gesture_interface::msg::GestureTopic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gesture_interface::msg::GestureTopic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gesture_interface__msg__GestureTopic
    std::shared_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gesture_interface__msg__GestureTopic
    std::shared_ptr<gesture_interface::msg::GestureTopic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GestureTopic_ & other) const
  {
    if (this->linear_motion != other.linear_motion) {
      return false;
    }
    if (this->angular_motion != other.angular_motion) {
      return false;
    }
    return true;
  }
  bool operator!=(const GestureTopic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GestureTopic_

// alias to use template instance with default allocator
using GestureTopic =
  gesture_interface::msg::GestureTopic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gesture_interface

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__STRUCT_HPP_
