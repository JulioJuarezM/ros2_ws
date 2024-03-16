// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Int8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/int8_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Int8MultiArray_data
{
public:
  explicit Init_Int8MultiArray_data(::custom_interfaces::msg::Int8MultiArray & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Int8MultiArray data(::custom_interfaces::msg::Int8MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Int8MultiArray msg_;
};

class Init_Int8MultiArray_layout
{
public:
  Init_Int8MultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int8MultiArray_data layout(::custom_interfaces::msg::Int8MultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Int8MultiArray_data(msg_);
  }

private:
  ::custom_interfaces::msg::Int8MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Int8MultiArray>()
{
  return custom_interfaces::msg::builder::Init_Int8MultiArray_layout();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__BUILDER_HPP_
