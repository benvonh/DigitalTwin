// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbag2_interfaces:srv\TogglePaused.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosbag2_interfaces/srv/toggle_paused.h"


#ifndef ROSBAG2_INTERFACES__SRV__DETAIL__TOGGLE_PAUSED__STRUCT_H_
#define ROSBAG2_INTERFACES__SRV__DETAIL__TOGGLE_PAUSED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TogglePaused in the package rosbag2_interfaces.
typedef struct rosbag2_interfaces__srv__TogglePaused_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosbag2_interfaces__srv__TogglePaused_Request;

// Struct for a sequence of rosbag2_interfaces__srv__TogglePaused_Request.
typedef struct rosbag2_interfaces__srv__TogglePaused_Request__Sequence
{
  rosbag2_interfaces__srv__TogglePaused_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_interfaces__srv__TogglePaused_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TogglePaused in the package rosbag2_interfaces.
typedef struct rosbag2_interfaces__srv__TogglePaused_Response
{
  uint8_t structure_needs_at_least_one_member;
} rosbag2_interfaces__srv__TogglePaused_Response;

// Struct for a sequence of rosbag2_interfaces__srv__TogglePaused_Response.
typedef struct rosbag2_interfaces__srv__TogglePaused_Response__Sequence
{
  rosbag2_interfaces__srv__TogglePaused_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_interfaces__srv__TogglePaused_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rosbag2_interfaces__srv__TogglePaused_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rosbag2_interfaces__srv__TogglePaused_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TogglePaused in the package rosbag2_interfaces.
typedef struct rosbag2_interfaces__srv__TogglePaused_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rosbag2_interfaces__srv__TogglePaused_Request__Sequence request;
  rosbag2_interfaces__srv__TogglePaused_Response__Sequence response;
} rosbag2_interfaces__srv__TogglePaused_Event;

// Struct for a sequence of rosbag2_interfaces__srv__TogglePaused_Event.
typedef struct rosbag2_interfaces__srv__TogglePaused_Event__Sequence
{
  rosbag2_interfaces__srv__TogglePaused_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_interfaces__srv__TogglePaused_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBAG2_INTERFACES__SRV__DETAIL__TOGGLE_PAUSED__STRUCT_H_
