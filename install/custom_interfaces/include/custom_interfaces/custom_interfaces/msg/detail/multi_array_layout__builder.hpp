// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_LAYOUT__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_LAYOUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/multi_array_layout__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_MultiArrayLayout_data_offset
{
public:
  explicit Init_MultiArrayLayout_data_offset(::custom_interfaces::msg::MultiArrayLayout & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::MultiArrayLayout data_offset(::custom_interfaces::msg::MultiArrayLayout::_data_offset_type arg)
  {
    msg_.data_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::MultiArrayLayout msg_;
};

class Init_MultiArrayLayout_dim
{
public:
  Init_MultiArrayLayout_dim()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArrayLayout_data_offset dim(::custom_interfaces::msg::MultiArrayLayout::_dim_type arg)
  {
    msg_.dim = std::move(arg);
    return Init_MultiArrayLayout_data_offset(msg_);
  }

private:
  ::custom_interfaces::msg::MultiArrayLayout msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::MultiArrayLayout>()
{
  return custom_interfaces::msg::builder::Init_MultiArrayLayout_dim();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_LAYOUT__BUILDER_HPP_
