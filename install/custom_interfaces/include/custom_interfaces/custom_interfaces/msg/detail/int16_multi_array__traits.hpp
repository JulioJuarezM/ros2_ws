// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/int16_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'layout'
#include "custom_interfaces/msg/detail/multi_array_layout__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Int16MultiArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: layout
  {
    out << "layout: ";
    to_flow_style_yaml(msg.layout, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Int16MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout:\n";
    to_block_style_yaml(msg.layout, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Int16MultiArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::Int16MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::Int16MultiArray & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::Int16MultiArray>()
{
  return "custom_interfaces::msg::Int16MultiArray";
}

template<>
inline const char * name<custom_interfaces::msg::Int16MultiArray>()
{
  return "custom_interfaces/msg/Int16MultiArray";
}

template<>
struct has_fixed_size<custom_interfaces::msg::Int16MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::Int16MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::Int16MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__TRAITS_HPP_
