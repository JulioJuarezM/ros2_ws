// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MultiArrayDimension in the package custom_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct custom_interfaces__msg__MultiArrayDimension
{
  /// label of given dimension
  rosidl_runtime_c__String label;
  /// size of given dimension (in type units)
  uint32_t size;
  /// stride of given dimension
  uint32_t stride;
} custom_interfaces__msg__MultiArrayDimension;

// Struct for a sequence of custom_interfaces__msg__MultiArrayDimension.
typedef struct custom_interfaces__msg__MultiArrayDimension__Sequence
{
  custom_interfaces__msg__MultiArrayDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__MultiArrayDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
