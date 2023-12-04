// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__FUNCTIONS_H_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gesture_interface/msg/rosidl_generator_c__visibility_control.h"

#include "gesture_interface/msg/detail/gesture_topic__struct.h"

/// Initialize msg/GestureTopic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gesture_interface__msg__GestureTopic
 * )) before or use
 * gesture_interface__msg__GestureTopic__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
bool
gesture_interface__msg__GestureTopic__init(gesture_interface__msg__GestureTopic * msg);

/// Finalize msg/GestureTopic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
void
gesture_interface__msg__GestureTopic__fini(gesture_interface__msg__GestureTopic * msg);

/// Create msg/GestureTopic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gesture_interface__msg__GestureTopic__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
gesture_interface__msg__GestureTopic *
gesture_interface__msg__GestureTopic__create();

/// Destroy msg/GestureTopic message.
/**
 * It calls
 * gesture_interface__msg__GestureTopic__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
void
gesture_interface__msg__GestureTopic__destroy(gesture_interface__msg__GestureTopic * msg);

/// Check for msg/GestureTopic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
bool
gesture_interface__msg__GestureTopic__are_equal(const gesture_interface__msg__GestureTopic * lhs, const gesture_interface__msg__GestureTopic * rhs);

/// Copy a msg/GestureTopic message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
bool
gesture_interface__msg__GestureTopic__copy(
  const gesture_interface__msg__GestureTopic * input,
  gesture_interface__msg__GestureTopic * output);

/// Initialize array of msg/GestureTopic messages.
/**
 * It allocates the memory for the number of elements and calls
 * gesture_interface__msg__GestureTopic__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
bool
gesture_interface__msg__GestureTopic__Sequence__init(gesture_interface__msg__GestureTopic__Sequence * array, size_t size);

/// Finalize array of msg/GestureTopic messages.
/**
 * It calls
 * gesture_interface__msg__GestureTopic__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
void
gesture_interface__msg__GestureTopic__Sequence__fini(gesture_interface__msg__GestureTopic__Sequence * array);

/// Create array of msg/GestureTopic messages.
/**
 * It allocates the memory for the array and calls
 * gesture_interface__msg__GestureTopic__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
gesture_interface__msg__GestureTopic__Sequence *
gesture_interface__msg__GestureTopic__Sequence__create(size_t size);

/// Destroy array of msg/GestureTopic messages.
/**
 * It calls
 * gesture_interface__msg__GestureTopic__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
void
gesture_interface__msg__GestureTopic__Sequence__destroy(gesture_interface__msg__GestureTopic__Sequence * array);

/// Check for msg/GestureTopic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
bool
gesture_interface__msg__GestureTopic__Sequence__are_equal(const gesture_interface__msg__GestureTopic__Sequence * lhs, const gesture_interface__msg__GestureTopic__Sequence * rhs);

/// Copy an array of msg/GestureTopic messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gesture_interface
bool
gesture_interface__msg__GestureTopic__Sequence__copy(
  const gesture_interface__msg__GestureTopic__Sequence * input,
  gesture_interface__msg__GestureTopic__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__FUNCTIONS_H_
