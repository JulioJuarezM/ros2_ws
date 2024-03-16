// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Int64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'layout'
#include "custom_interfaces/msg/detail/multi_array_layout__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Int64MultiArray __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Int64MultiArray __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Int64MultiArray_
{
  using Type = Int64MultiArray_<ContainerAllocator>;

  explicit Int64MultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layout(_init)
  {
    (void)_init;
  }

  explicit Int64MultiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layout(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _layout_type =
    custom_interfaces::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _data_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__layout(
    const custom_interfaces::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Int64MultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Int64MultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Int64MultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Int64MultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Int64MultiArray
    std::shared_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Int64MultiArray
    std::shared_ptr<custom_interfaces::msg::Int64MultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Int64MultiArray_ & other) const
  {
    if (this->layout != other.layout) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Int64MultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Int64MultiArray_

// alias to use template instance with default allocator
using Int64MultiArray =
  custom_interfaces::msg::Int64MultiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_HPP_