// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice
#include "gesture_interface/msg/detail/gesture_topic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `linear_motion`
// Member `angular_motion`
#include "rosidl_runtime_c/string_functions.h"

bool
gesture_interface__msg__GestureTopic__init(gesture_interface__msg__GestureTopic * msg)
{
  if (!msg) {
    return false;
  }
  // linear_motion
  if (!rosidl_runtime_c__String__init(&msg->linear_motion)) {
    gesture_interface__msg__GestureTopic__fini(msg);
    return false;
  }
  // angular_motion
  if (!rosidl_runtime_c__String__init(&msg->angular_motion)) {
    gesture_interface__msg__GestureTopic__fini(msg);
    return false;
  }
  return true;
}

void
gesture_interface__msg__GestureTopic__fini(gesture_interface__msg__GestureTopic * msg)
{
  if (!msg) {
    return;
  }
  // linear_motion
  rosidl_runtime_c__String__fini(&msg->linear_motion);
  // angular_motion
  rosidl_runtime_c__String__fini(&msg->angular_motion);
}

bool
gesture_interface__msg__GestureTopic__are_equal(const gesture_interface__msg__GestureTopic * lhs, const gesture_interface__msg__GestureTopic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_motion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->linear_motion), &(rhs->linear_motion)))
  {
    return false;
  }
  // angular_motion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->angular_motion), &(rhs->angular_motion)))
  {
    return false;
  }
  return true;
}

bool
gesture_interface__msg__GestureTopic__copy(
  const gesture_interface__msg__GestureTopic * input,
  gesture_interface__msg__GestureTopic * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_motion
  if (!rosidl_runtime_c__String__copy(
      &(input->linear_motion), &(output->linear_motion)))
  {
    return false;
  }
  // angular_motion
  if (!rosidl_runtime_c__String__copy(
      &(input->angular_motion), &(output->angular_motion)))
  {
    return false;
  }
  return true;
}

gesture_interface__msg__GestureTopic *
gesture_interface__msg__GestureTopic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gesture_interface__msg__GestureTopic * msg = (gesture_interface__msg__GestureTopic *)allocator.allocate(sizeof(gesture_interface__msg__GestureTopic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gesture_interface__msg__GestureTopic));
  bool success = gesture_interface__msg__GestureTopic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gesture_interface__msg__GestureTopic__destroy(gesture_interface__msg__GestureTopic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gesture_interface__msg__GestureTopic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gesture_interface__msg__GestureTopic__Sequence__init(gesture_interface__msg__GestureTopic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gesture_interface__msg__GestureTopic * data = NULL;

  if (size) {
    data = (gesture_interface__msg__GestureTopic *)allocator.zero_allocate(size, sizeof(gesture_interface__msg__GestureTopic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gesture_interface__msg__GestureTopic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gesture_interface__msg__GestureTopic__fini(&data[i - 1]);
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
gesture_interface__msg__GestureTopic__Sequence__fini(gesture_interface__msg__GestureTopic__Sequence * array)
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
      gesture_interface__msg__GestureTopic__fini(&array->data[i]);
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

gesture_interface__msg__GestureTopic__Sequence *
gesture_interface__msg__GestureTopic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gesture_interface__msg__GestureTopic__Sequence * array = (gesture_interface__msg__GestureTopic__Sequence *)allocator.allocate(sizeof(gesture_interface__msg__GestureTopic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gesture_interface__msg__GestureTopic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gesture_interface__msg__GestureTopic__Sequence__destroy(gesture_interface__msg__GestureTopic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gesture_interface__msg__GestureTopic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gesture_interface__msg__GestureTopic__Sequence__are_equal(const gesture_interface__msg__GestureTopic__Sequence * lhs, const gesture_interface__msg__GestureTopic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gesture_interface__msg__GestureTopic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gesture_interface__msg__GestureTopic__Sequence__copy(
  const gesture_interface__msg__GestureTopic__Sequence * input,
  gesture_interface__msg__GestureTopic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gesture_interface__msg__GestureTopic);
    gesture_interface__msg__GestureTopic * data =
      (gesture_interface__msg__GestureTopic *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gesture_interface__msg__GestureTopic__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gesture_interface__msg__GestureTopic__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gesture_interface__msg__GestureTopic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
