// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__FUNCTIONS_H_
#define CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cam_interface/msg/rosidl_generator_c__visibility_control.h"

#include "cam_interface/msg/detail/cam_topic__struct.h"

/// Initialize msg/CamTopic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cam_interface__msg__CamTopic
 * )) before or use
 * cam_interface__msg__CamTopic__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__CamTopic__init(cam_interface__msg__CamTopic * msg);

/// Finalize msg/CamTopic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__CamTopic__fini(cam_interface__msg__CamTopic * msg);

/// Create msg/CamTopic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cam_interface__msg__CamTopic__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
cam_interface__msg__CamTopic *
cam_interface__msg__CamTopic__create();

/// Destroy msg/CamTopic message.
/**
 * It calls
 * cam_interface__msg__CamTopic__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__CamTopic__destroy(cam_interface__msg__CamTopic * msg);

/// Check for msg/CamTopic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__CamTopic__are_equal(const cam_interface__msg__CamTopic * lhs, const cam_interface__msg__CamTopic * rhs);

/// Copy a msg/CamTopic message.
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
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__CamTopic__copy(
  const cam_interface__msg__CamTopic * input,
  cam_interface__msg__CamTopic * output);

/// Initialize array of msg/CamTopic messages.
/**
 * It allocates the memory for the number of elements and calls
 * cam_interface__msg__CamTopic__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__CamTopic__Sequence__init(cam_interface__msg__CamTopic__Sequence * array, size_t size);

/// Finalize array of msg/CamTopic messages.
/**
 * It calls
 * cam_interface__msg__CamTopic__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__CamTopic__Sequence__fini(cam_interface__msg__CamTopic__Sequence * array);

/// Create array of msg/CamTopic messages.
/**
 * It allocates the memory for the array and calls
 * cam_interface__msg__CamTopic__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
cam_interface__msg__CamTopic__Sequence *
cam_interface__msg__CamTopic__Sequence__create(size_t size);

/// Destroy array of msg/CamTopic messages.
/**
 * It calls
 * cam_interface__msg__CamTopic__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__CamTopic__Sequence__destroy(cam_interface__msg__CamTopic__Sequence * array);

/// Check for msg/CamTopic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__CamTopic__Sequence__are_equal(const cam_interface__msg__CamTopic__Sequence * lhs, const cam_interface__msg__CamTopic__Sequence * rhs);

/// Copy an array of msg/CamTopic messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__CamTopic__Sequence__copy(
  const cam_interface__msg__CamTopic__Sequence * input,
  cam_interface__msg__CamTopic__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__FUNCTIONS_H_
