// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRIGGER__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Trigger_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trigger_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::Trigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::Trigger_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::Trigger_Request>()
{
  return "custom_interfaces::srv::Trigger_Request";
}

template<>
inline const char * name<custom_interfaces::srv::Trigger_Request>()
{
  return "custom_interfaces/srv/Trigger_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Trigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Trigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::Trigger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Trigger_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trigger_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::Trigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::Trigger_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::Trigger_Response>()
{
  return "custom_interfaces::srv::Trigger_Response";
}

template<>
inline const char * name<custom_interfaces::srv::Trigger_Response>()
{
  return "custom_interfaces/srv/Trigger_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Trigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Trigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::Trigger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Trigger>()
{
  return "custom_interfaces::srv::Trigger";
}

template<>
inline const char * name<custom_interfaces::srv::Trigger>()
{
  return "custom_interfaces/srv/Trigger";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Trigger>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::Trigger_Request>::value &&
    has_fixed_size<custom_interfaces::srv::Trigger_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::Trigger>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::Trigger_Request>::value &&
    has_bounded_size<custom_interfaces::srv::Trigger_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::Trigger>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::Trigger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::Trigger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRIGGER__TRAITS_HPP_