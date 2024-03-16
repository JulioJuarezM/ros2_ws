// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__U_INT16__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__U_INT16__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/u_int16__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_UInt16_data
{
public:
  Init_UInt16_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::UInt16 data(::custom_interfaces::msg::UInt16::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::UInt16 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::UInt16>()
{
  return custom_interfaces::msg::builder::Init_UInt16_data();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__U_INT16__BUILDER_HPP_
