// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_pubsub:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__NUM__BUILDER_HPP_
#define CPP_PUBSUB__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_pubsub/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_pubsub
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::msg::Num num(::cpp_pubsub::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::msg::Num>()
{
  return cpp_pubsub::msg::builder::Init_Num_num();
}

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__MSG__DETAIL__NUM__BUILDER_HPP_
