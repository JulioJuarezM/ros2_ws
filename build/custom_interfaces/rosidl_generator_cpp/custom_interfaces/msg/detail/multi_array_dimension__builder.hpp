// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/multi_array_dimension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_MultiArrayDimension_stride
{
public:
  explicit Init_MultiArrayDimension_stride(::custom_interfaces::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::MultiArrayDimension stride(::custom_interfaces::msg::MultiArrayDimension::_stride_type arg)
  {
    msg_.stride = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_size
{
public:
  explicit Init_MultiArrayDimension_size(::custom_interfaces::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  Init_MultiArrayDimension_stride size(::custom_interfaces::msg::MultiArrayDimension::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_MultiArrayDimension_stride(msg_);
  }

private:
  ::custom_interfaces::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_label
{
public:
  Init_MultiArrayDimension_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArrayDimension_size label(::custom_interfaces::msg::MultiArrayDimension::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_MultiArrayDimension_size(msg_);
  }

private:
  ::custom_interfaces::msg::MultiArrayDimension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::MultiArrayDimension>()
{
  return custom_interfaces::msg::builder::Init_MultiArrayDimension_label();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
