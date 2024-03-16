// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/byte_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_ByteMultiArray_data
{
public:
  explicit Init_ByteMultiArray_data(::custom_interfaces::msg::ByteMultiArray & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::ByteMultiArray data(::custom_interfaces::msg::ByteMultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::ByteMultiArray msg_;
};

class Init_ByteMultiArray_layout
{
public:
  Init_ByteMultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ByteMultiArray_data layout(::custom_interfaces::msg::ByteMultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_ByteMultiArray_data(msg_);
  }

private:
  ::custom_interfaces::msg::ByteMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::ByteMultiArray>()
{
  return custom_interfaces::msg::builder::Init_ByteMultiArray_layout();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__BUILDER_HPP_
