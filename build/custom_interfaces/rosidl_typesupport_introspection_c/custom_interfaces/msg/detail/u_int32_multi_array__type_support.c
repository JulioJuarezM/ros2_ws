// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/UInt32MultiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/u_int32_multi_array__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/u_int32_multi_array__functions.h"
#include "custom_interfaces/msg/detail/u_int32_multi_array__struct.h"


// Include directives for member types
// Member `layout`
#include "custom_interfaces/msg/multi_array_layout.h"
// Member `layout`
#include "custom_interfaces/msg/detail/multi_array_layout__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__UInt32MultiArray__init(message_memory);
}

void custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_fini_function(void * message_memory)
{
  custom_interfaces__msg__UInt32MultiArray__fini(message_memory);
}

size_t custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__size_function__UInt32MultiArray__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__get_const_function__UInt32MultiArray__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__get_function__UInt32MultiArray__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__fetch_function__UInt32MultiArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__get_const_function__UInt32MultiArray__data(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__assign_function__UInt32MultiArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__get_function__UInt32MultiArray__data(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__resize_function__UInt32MultiArray__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_member_array[2] = {
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__UInt32MultiArray, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__UInt32MultiArray, data),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__size_function__UInt32MultiArray__data,  // size() function pointer
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__get_const_function__UInt32MultiArray__data,  // get_const(index) function pointer
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__get_function__UInt32MultiArray__data,  // get(index) function pointer
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__fetch_function__UInt32MultiArray__data,  // fetch(index, &value) function pointer
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__assign_function__UInt32MultiArray__data,  // assign(index, value) function pointer
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__resize_function__UInt32MultiArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_members = {
  "custom_interfaces__msg",  // message namespace
  "UInt32MultiArray",  // message name
  2,  // number of fields
  sizeof(custom_interfaces__msg__UInt32MultiArray),
  custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_member_array,  // message members
  custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_type_support_handle = {
  0,
  &custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, UInt32MultiArray)() {
  custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, MultiArrayLayout)();
  if (!custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__UInt32MultiArray__rosidl_typesupport_introspection_c__UInt32MultiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
