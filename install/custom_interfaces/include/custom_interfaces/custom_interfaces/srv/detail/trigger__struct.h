// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Trigger in the package custom_interfaces.
typedef struct custom_interfaces__srv__Trigger_Request
{
  uint8_t structure_needs_at_least_one_member;
} custom_interfaces__srv__Trigger_Request;

// Struct for a sequence of custom_interfaces__srv__Trigger_Request.
typedef struct custom_interfaces__srv__Trigger_Request__Sequence
{
  custom_interfaces__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Trigger_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Trigger in the package custom_interfaces.
typedef struct custom_interfaces__srv__Trigger_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages.
  rosidl_runtime_c__String message;
} custom_interfaces__srv__Trigger_Response;

// Struct for a sequence of custom_interfaces__srv__Trigger_Response.
typedef struct custom_interfaces__srv__Trigger_Response__Sequence
{
  custom_interfaces__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Trigger_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_