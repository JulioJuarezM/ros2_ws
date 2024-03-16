// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__EMPTY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Empty>()
{
  return ::custom_interfaces::msg::Empty(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__EMPTY__BUILDER_HPP_
