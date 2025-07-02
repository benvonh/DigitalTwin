// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbag2_test_msgdefs:action\ComplexActionMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosbag2_test_msgdefs/action/complex_action_msg.h"


#ifndef ROSBAG2_TEST_MSGDEFS__ACTION__DETAIL__COMPLEX_ACTION_MSG__STRUCT_H_
#define ROSBAG2_TEST_MSGDEFS__ACTION__DETAIL__COMPLEX_ACTION_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
#include "rosbag2_test_msgdefs/msg/detail/basic_msg__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_Goal
{
  rosbag2_test_msgdefs__msg__BasicMsg goal;
} rosbag2_test_msgdefs__action__ComplexActionMsg_Goal;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_Goal.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_Goal__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosbag2_test_msgdefs/msg/detail/basic_msg__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_Result
{
  rosbag2_test_msgdefs__msg__BasicMsg result;
} rosbag2_test_msgdefs__action__ComplexActionMsg_Result;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_Result.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_Result__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosbag2_test_msgdefs/msg/detail/basic_msg__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback
{
  rosbag2_test_msgdefs__msg__BasicMsg feedback;
} rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rosbag2_test_msgdefs/action/detail/complex_action_msg__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rosbag2_test_msgdefs__action__ComplexActionMsg_Goal goal;
} rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Request__Sequence request;
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Response__Sequence response;
} rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosbag2_test_msgdefs/action/detail/complex_action_msg__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response
{
  int8_t status;
  rosbag2_test_msgdefs__action__ComplexActionMsg_Result result;
} rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Request__Sequence request;
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Response__Sequence response;
} rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rosbag2_test_msgdefs/action/detail/complex_action_msg__struct.h"

/// Struct defined in action/ComplexActionMsg in the package rosbag2_test_msgdefs.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rosbag2_test_msgdefs__action__ComplexActionMsg_Feedback feedback;
} rosbag2_test_msgdefs__action__ComplexActionMsg_FeedbackMessage;

// Struct for a sequence of rosbag2_test_msgdefs__action__ComplexActionMsg_FeedbackMessage.
typedef struct rosbag2_test_msgdefs__action__ComplexActionMsg_FeedbackMessage__Sequence
{
  rosbag2_test_msgdefs__action__ComplexActionMsg_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbag2_test_msgdefs__action__ComplexActionMsg_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBAG2_TEST_MSGDEFS__ACTION__DETAIL__COMPLEX_ACTION_MSG__STRUCT_H_
