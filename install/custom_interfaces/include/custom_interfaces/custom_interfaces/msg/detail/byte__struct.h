// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Byte.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__BYTE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__BYTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Byte in the package custom_interfaces.
/**
  * This is an example message of using a primitive datatype, byte.
  * If you want to test with this that's fine, but if you are deploying
  * it into a system you should create a semantically meaningful message type.
  * If you want to embed it in another message, use the primitive data type instead.
 */
typedef struct custom_interfaces__msg__Byte
{
  uint8_t data;
} custom_interfaces__msg__Byte;

// Struct for a sequence of custom_interfaces__msg__Byte.
typedef struct custom_interfaces__msg__Byte__Sequence
{
  custom_interfaces__msg__Byte * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Byte__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__BYTE__STRUCT_H_
