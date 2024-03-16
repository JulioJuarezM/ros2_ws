// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/UInt32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "custom_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt32MultiArray in the package custom_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct custom_interfaces__msg__UInt32MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  custom_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint32__Sequence data;
} custom_interfaces__msg__UInt32MultiArray;

// Struct for a sequence of custom_interfaces__msg__UInt32MultiArray.
typedef struct custom_interfaces__msg__UInt32MultiArray__Sequence
{
  custom_interfaces__msg__UInt32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__UInt32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_