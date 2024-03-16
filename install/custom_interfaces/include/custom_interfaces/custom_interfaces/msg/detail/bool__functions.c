// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/Bool.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/bool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interfaces__msg__Bool__init(custom_interfaces__msg__Bool * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
custom_interfaces__msg__Bool__fini(custom_interfaces__msg__Bool * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
custom_interfaces__msg__Bool__are_equal(const custom_interfaces__msg__Bool * lhs, const custom_interfaces__msg__Bool * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__Bool__copy(
  const custom_interfaces__msg__Bool * input,
  custom_interfaces__msg__Bool * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

custom_interfaces__msg__Bool *
custom_interfaces__msg__Bool__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Bool * msg = (custom_interfaces__msg__Bool *)allocator.allocate(sizeof(custom_interfaces__msg__Bool), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__Bool));
  bool success = custom_interfaces__msg__Bool__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__Bool__destroy(custom_interfaces__msg__Bool * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__Bool__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__Bool__Sequence__init(custom_interfaces__msg__Bool__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Bool * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__Bool *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__Bool), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__Bool__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__Bool__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interfaces__msg__Bool__Sequence__fini(custom_interfaces__msg__Bool__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces__msg__Bool__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interfaces__msg__Bool__Sequence *
custom_interfaces__msg__Bool__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Bool__Sequence * array = (custom_interfaces__msg__Bool__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__Bool__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__Bool__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__Bool__Sequence__destroy(custom_interfaces__msg__Bool__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__Bool__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__Bool__Sequence__are_equal(const custom_interfaces__msg__Bool__Sequence * lhs, const custom_interfaces__msg__Bool__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__Bool__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__Bool__Sequence__copy(
  const custom_interfaces__msg__Bool__Sequence * input,
  custom_interfaces__msg__Bool__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__Bool);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__Bool * data =
      (custom_interfaces__msg__Bool *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__Bool__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__Bool__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__Bool__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
