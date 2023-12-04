// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice
#include "cam_interface/msg/detail/cam_topic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_data`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
cam_interface__msg__CamTopic__init(cam_interface__msg__CamTopic * msg)
{
  if (!msg) {
    return false;
  }
  // image_data
  if (!sensor_msgs__msg__Image__init(&msg->image_data)) {
    cam_interface__msg__CamTopic__fini(msg);
    return false;
  }
  return true;
}

void
cam_interface__msg__CamTopic__fini(cam_interface__msg__CamTopic * msg)
{
  if (!msg) {
    return;
  }
  // image_data
  sensor_msgs__msg__Image__fini(&msg->image_data);
}

bool
cam_interface__msg__CamTopic__are_equal(const cam_interface__msg__CamTopic * lhs, const cam_interface__msg__CamTopic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_data
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image_data), &(rhs->image_data)))
  {
    return false;
  }
  return true;
}

bool
cam_interface__msg__CamTopic__copy(
  const cam_interface__msg__CamTopic * input,
  cam_interface__msg__CamTopic * output)
{
  if (!input || !output) {
    return false;
  }
  // image_data
  if (!sensor_msgs__msg__Image__copy(
      &(input->image_data), &(output->image_data)))
  {
    return false;
  }
  return true;
}

cam_interface__msg__CamTopic *
cam_interface__msg__CamTopic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cam_interface__msg__CamTopic * msg = (cam_interface__msg__CamTopic *)allocator.allocate(sizeof(cam_interface__msg__CamTopic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cam_interface__msg__CamTopic));
  bool success = cam_interface__msg__CamTopic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cam_interface__msg__CamTopic__destroy(cam_interface__msg__CamTopic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cam_interface__msg__CamTopic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cam_interface__msg__CamTopic__Sequence__init(cam_interface__msg__CamTopic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cam_interface__msg__CamTopic * data = NULL;

  if (size) {
    data = (cam_interface__msg__CamTopic *)allocator.zero_allocate(size, sizeof(cam_interface__msg__CamTopic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cam_interface__msg__CamTopic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cam_interface__msg__CamTopic__fini(&data[i - 1]);
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
cam_interface__msg__CamTopic__Sequence__fini(cam_interface__msg__CamTopic__Sequence * array)
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
      cam_interface__msg__CamTopic__fini(&array->data[i]);
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

cam_interface__msg__CamTopic__Sequence *
cam_interface__msg__CamTopic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cam_interface__msg__CamTopic__Sequence * array = (cam_interface__msg__CamTopic__Sequence *)allocator.allocate(sizeof(cam_interface__msg__CamTopic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cam_interface__msg__CamTopic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cam_interface__msg__CamTopic__Sequence__destroy(cam_interface__msg__CamTopic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cam_interface__msg__CamTopic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cam_interface__msg__CamTopic__Sequence__are_equal(const cam_interface__msg__CamTopic__Sequence * lhs, const cam_interface__msg__CamTopic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cam_interface__msg__CamTopic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cam_interface__msg__CamTopic__Sequence__copy(
  const cam_interface__msg__CamTopic__Sequence * input,
  cam_interface__msg__CamTopic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cam_interface__msg__CamTopic);
    cam_interface__msg__CamTopic * data =
      (cam_interface__msg__CamTopic *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cam_interface__msg__CamTopic__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cam_interface__msg__CamTopic__fini(&data[i]);
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
    if (!cam_interface__msg__CamTopic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
