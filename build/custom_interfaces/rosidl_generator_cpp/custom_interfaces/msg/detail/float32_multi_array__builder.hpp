// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Float32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/float32_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Float32MultiArray_data
{
public:
  explicit Init_Float32MultiArray_data(::custom_interfaces::msg::Float32MultiArray & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Float32MultiArray data(::custom_interfaces::msg::Float32MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Float32MultiArray msg_;
};

class Init_Float32MultiArray_layout
{
public:
  Init_Float32MultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float32MultiArray_data layout(::custom_interfaces::msg::Float32MultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Float32MultiArray_data(msg_);
  }

private:
  ::custom_interfaces::msg::Float32MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Float32MultiArray>()
{
  return custom_interfaces::msg::builder::Init_Float32MultiArray_layout();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__BUILDER_HPP_
