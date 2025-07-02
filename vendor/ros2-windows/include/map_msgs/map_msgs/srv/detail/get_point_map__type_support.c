// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:srv\GetPointMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/srv/detail/get_point_map__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/srv/detail/get_point_map__functions.h"
#include "map_msgs/srv/detail/get_point_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__GetPointMap_Request__init(message_memory);
}

void map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_fini_function(void * message_memory)
{
  map_msgs__srv__GetPointMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMap_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_members = {
  "map_msgs__srv",  // message namespace
  "GetPointMap_Request",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__GetPointMap_Request),
  false,  // has_any_key_member_
  map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_member_array,  // message members
  map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_type_support_handle = {
  0,
  &map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_members,
  get_message_typesupport_handle_function,
  &map_msgs__srv__GetPointMap_Request__get_type_hash,
  &map_msgs__srv__GetPointMap_Request__get_type_description,
  &map_msgs__srv__GetPointMap_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Request)() {
  if (!map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_type_support_handle.typesupport_identifier) {
    map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "map_msgs/srv/detail/get_point_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map__functions.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map__struct.h"


// Include directives for member types
// Member `map`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `map`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__GetPointMap_Response__init(message_memory);
}

void map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_fini_function(void * message_memory)
{
  map_msgs__srv__GetPointMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_member_array[1] = {
  {
    "map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMap_Response, map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_members = {
  "map_msgs__srv",  // message namespace
  "GetPointMap_Response",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__GetPointMap_Response),
  false,  // has_any_key_member_
  map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_member_array,  // message members
  map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle = {
  0,
  &map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_members,
  get_message_typesupport_handle_function,
  &map_msgs__srv__GetPointMap_Response__get_type_hash,
  &map_msgs__srv__GetPointMap_Response__get_type_description,
  &map_msgs__srv__GetPointMap_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Response)() {
  map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle.typesupport_identifier) {
    map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "map_msgs/srv/detail/get_point_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map__functions.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "map_msgs/srv/get_point_map.h"
// Member `request`
// Member `response`
// already included above
// #include "map_msgs/srv/detail/get_point_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__GetPointMap_Event__init(message_memory);
}

void map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_fini_function(void * message_memory)
{
  map_msgs__srv__GetPointMap_Event__fini(message_memory);
}

size_t map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__size_function__GetPointMap_Event__request(
  const void * untyped_member)
{
  const map_msgs__srv__GetPointMap_Request__Sequence * member =
    (const map_msgs__srv__GetPointMap_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointMap_Event__request(
  const void * untyped_member, size_t index)
{
  const map_msgs__srv__GetPointMap_Request__Sequence * member =
    (const map_msgs__srv__GetPointMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_function__GetPointMap_Event__request(
  void * untyped_member, size_t index)
{
  map_msgs__srv__GetPointMap_Request__Sequence * member =
    (map_msgs__srv__GetPointMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointMap_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const map_msgs__srv__GetPointMap_Request * item =
    ((const map_msgs__srv__GetPointMap_Request *)
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointMap_Event__request(untyped_member, index));
  map_msgs__srv__GetPointMap_Request * value =
    (map_msgs__srv__GetPointMap_Request *)(untyped_value);
  *value = *item;
}

void map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__assign_function__GetPointMap_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  map_msgs__srv__GetPointMap_Request * item =
    ((map_msgs__srv__GetPointMap_Request *)
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_function__GetPointMap_Event__request(untyped_member, index));
  const map_msgs__srv__GetPointMap_Request * value =
    (const map_msgs__srv__GetPointMap_Request *)(untyped_value);
  *item = *value;
}

bool map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__resize_function__GetPointMap_Event__request(
  void * untyped_member, size_t size)
{
  map_msgs__srv__GetPointMap_Request__Sequence * member =
    (map_msgs__srv__GetPointMap_Request__Sequence *)(untyped_member);
  map_msgs__srv__GetPointMap_Request__Sequence__fini(member);
  return map_msgs__srv__GetPointMap_Request__Sequence__init(member, size);
}

size_t map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__size_function__GetPointMap_Event__response(
  const void * untyped_member)
{
  const map_msgs__srv__GetPointMap_Response__Sequence * member =
    (const map_msgs__srv__GetPointMap_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointMap_Event__response(
  const void * untyped_member, size_t index)
{
  const map_msgs__srv__GetPointMap_Response__Sequence * member =
    (const map_msgs__srv__GetPointMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_function__GetPointMap_Event__response(
  void * untyped_member, size_t index)
{
  map_msgs__srv__GetPointMap_Response__Sequence * member =
    (map_msgs__srv__GetPointMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointMap_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const map_msgs__srv__GetPointMap_Response * item =
    ((const map_msgs__srv__GetPointMap_Response *)
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointMap_Event__response(untyped_member, index));
  map_msgs__srv__GetPointMap_Response * value =
    (map_msgs__srv__GetPointMap_Response *)(untyped_value);
  *value = *item;
}

void map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__assign_function__GetPointMap_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  map_msgs__srv__GetPointMap_Response * item =
    ((map_msgs__srv__GetPointMap_Response *)
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_function__GetPointMap_Event__response(untyped_member, index));
  const map_msgs__srv__GetPointMap_Response * value =
    (const map_msgs__srv__GetPointMap_Response *)(untyped_value);
  *item = *value;
}

bool map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__resize_function__GetPointMap_Event__response(
  void * untyped_member, size_t size)
{
  map_msgs__srv__GetPointMap_Response__Sequence * member =
    (map_msgs__srv__GetPointMap_Response__Sequence *)(untyped_member);
  map_msgs__srv__GetPointMap_Response__Sequence__fini(member);
  return map_msgs__srv__GetPointMap_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMap_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(map_msgs__srv__GetPointMap_Event, request),  // bytes offset in struct
    NULL,  // default value
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__size_function__GetPointMap_Event__request,  // size() function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointMap_Event__request,  // get_const(index) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_function__GetPointMap_Event__request,  // get(index) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointMap_Event__request,  // fetch(index, &value) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__assign_function__GetPointMap_Event__request,  // assign(index, value) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__resize_function__GetPointMap_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(map_msgs__srv__GetPointMap_Event, response),  // bytes offset in struct
    NULL,  // default value
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__size_function__GetPointMap_Event__response,  // size() function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointMap_Event__response,  // get_const(index) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__get_function__GetPointMap_Event__response,  // get(index) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointMap_Event__response,  // fetch(index, &value) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__assign_function__GetPointMap_Event__response,  // assign(index, value) function pointer
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__resize_function__GetPointMap_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_members = {
  "map_msgs__srv",  // message namespace
  "GetPointMap_Event",  // message name
  3,  // number of fields
  sizeof(map_msgs__srv__GetPointMap_Event),
  false,  // has_any_key_member_
  map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_member_array,  // message members
  map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_type_support_handle = {
  0,
  &map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_members,
  get_message_typesupport_handle_function,
  &map_msgs__srv__GetPointMap_Event__get_type_hash,
  &map_msgs__srv__GetPointMap_Event__get_type_description,
  &map_msgs__srv__GetPointMap_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Event)() {
  map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Request)();
  map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Response)();
  if (!map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_type_support_handle.typesupport_identifier) {
    map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_members = {
  "map_msgs__srv",  // service namespace
  "GetPointMap",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_Request_message_type_support_handle,
  NULL,  // response message
  // map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle
  NULL  // event_message
  // map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle
};


static rosidl_service_type_support_t map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_type_support_handle = {
  0,
  &map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_members,
  get_service_typesupport_handle_function,
  &map_msgs__srv__GetPointMap_Request__rosidl_typesupport_introspection_c__GetPointMap_Request_message_type_support_handle,
  &map_msgs__srv__GetPointMap_Response__rosidl_typesupport_introspection_c__GetPointMap_Response_message_type_support_handle,
  &map_msgs__srv__GetPointMap_Event__rosidl_typesupport_introspection_c__GetPointMap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    map_msgs,
    srv,
    GetPointMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    map_msgs,
    srv,
    GetPointMap
  ),
  &map_msgs__srv__GetPointMap__get_type_hash,
  &map_msgs__srv__GetPointMap__get_type_description,
  &map_msgs__srv__GetPointMap__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap)(void) {
  if (!map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_type_support_handle.typesupport_identifier) {
    map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMap_Event)()->data;
  }

  return &map_msgs__srv__detail__get_point_map__rosidl_typesupport_introspection_c__GetPointMap_service_type_support_handle;
}
