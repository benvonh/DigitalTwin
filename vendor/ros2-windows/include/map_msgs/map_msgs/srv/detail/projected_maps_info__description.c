// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from map_msgs:srv\ProjectedMapsInfo.idl
// generated code does not contain a copyright notice

#include "map_msgs/srv/detail/projected_maps_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_map_msgs
const rosidl_type_hash_t *
map_msgs__srv__ProjectedMapsInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x44, 0xfc, 0x9f, 0x83, 0x14, 0xd0, 0xb7,
      0x0d, 0x75, 0x7f, 0x7f, 0x17, 0x6a, 0x91, 0x4b,
      0x85, 0x13, 0x2b, 0xf5, 0x17, 0x2b, 0x14, 0x27,
      0x06, 0xaa, 0xae, 0xbd, 0x83, 0xbb, 0x43, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_map_msgs
const rosidl_type_hash_t *
map_msgs__srv__ProjectedMapsInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0xae, 0xa1, 0x95, 0x84, 0xa3, 0xe5, 0xd0,
      0xa5, 0xb4, 0x6c, 0x6e, 0x19, 0x5b, 0x8c, 0x87,
      0x46, 0x60, 0x50, 0xcd, 0x4e, 0xd7, 0x76, 0xbf,
      0x8c, 0x2b, 0x5d, 0xa8, 0x03, 0xaa, 0x1b, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_map_msgs
const rosidl_type_hash_t *
map_msgs__srv__ProjectedMapsInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0xe4, 0x16, 0x98, 0x65, 0x54, 0x3c, 0x3b,
      0x90, 0x5e, 0x05, 0x80, 0x70, 0x15, 0xb5, 0x5b,
      0x7c, 0x1c, 0xc9, 0x10, 0x9b, 0xd4, 0x28, 0xa0,
      0xe5, 0xa7, 0xc0, 0xb5, 0x65, 0x9e, 0xb3, 0x2e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_map_msgs
const rosidl_type_hash_t *
map_msgs__srv__ProjectedMapsInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x07, 0xe6, 0x0b, 0xc8, 0x09, 0x32, 0x13,
      0xe4, 0x3d, 0x69, 0x43, 0x52, 0x0d, 0x22, 0xa6,
      0xdf, 0x83, 0x34, 0x8a, 0x6b, 0x59, 0x4c, 0x28,
      0x7d, 0xac, 0xd6, 0xa8, 0x64, 0x25, 0x9f, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "map_msgs/msg/detail/projected_map_info__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t map_msgs__msg__ProjectedMapInfo__EXPECTED_HASH = {1, {
    0x99, 0xf9, 0x57, 0x92, 0xa7, 0xed, 0x7a, 0x78,
    0x45, 0x66, 0xad, 0xd9, 0x25, 0xce, 0x2a, 0xc1,
    0x3e, 0x61, 0xcd, 0xb1, 0x4e, 0x1e, 0x68, 0x04,
    0xca, 0x8e, 0x3f, 0xe0, 0xa5, 0xba, 0xaf, 0x13,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char map_msgs__srv__ProjectedMapsInfo__TYPE_NAME[] = "map_msgs/srv/ProjectedMapsInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char map_msgs__msg__ProjectedMapInfo__TYPE_NAME[] = "map_msgs/msg/ProjectedMapInfo";
static char map_msgs__srv__ProjectedMapsInfo_Event__TYPE_NAME[] = "map_msgs/srv/ProjectedMapsInfo_Event";
static char map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME[] = "map_msgs/srv/ProjectedMapsInfo_Request";
static char map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME[] = "map_msgs/srv/ProjectedMapsInfo_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char map_msgs__srv__ProjectedMapsInfo__FIELD_NAME__request_message[] = "request_message";
static char map_msgs__srv__ProjectedMapsInfo__FIELD_NAME__response_message[] = "response_message";
static char map_msgs__srv__ProjectedMapsInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field map_msgs__srv__ProjectedMapsInfo__FIELDS[] = {
  {
    {map_msgs__srv__ProjectedMapsInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {map_msgs__srv__ProjectedMapsInfo_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription map_msgs__srv__ProjectedMapsInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {map_msgs__msg__ProjectedMapInfo__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
map_msgs__srv__ProjectedMapsInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {map_msgs__srv__ProjectedMapsInfo__TYPE_NAME, 30, 30},
      {map_msgs__srv__ProjectedMapsInfo__FIELDS, 3, 3},
    },
    {map_msgs__srv__ProjectedMapsInfo__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&map_msgs__msg__ProjectedMapInfo__EXPECTED_HASH, map_msgs__msg__ProjectedMapInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = map_msgs__msg__ProjectedMapInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = map_msgs__srv__ProjectedMapsInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = map_msgs__srv__ProjectedMapsInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = map_msgs__srv__ProjectedMapsInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char map_msgs__srv__ProjectedMapsInfo_Request__FIELD_NAME__projected_maps_info[] = "projected_maps_info";

static rosidl_runtime_c__type_description__Field map_msgs__srv__ProjectedMapsInfo_Request__FIELDS[] = {
  {
    {map_msgs__srv__ProjectedMapsInfo_Request__FIELD_NAME__projected_maps_info, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {map_msgs__msg__ProjectedMapInfo__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription map_msgs__srv__ProjectedMapsInfo_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {map_msgs__msg__ProjectedMapInfo__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
map_msgs__srv__ProjectedMapsInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME, 38, 38},
      {map_msgs__srv__ProjectedMapsInfo_Request__FIELDS, 1, 1},
    },
    {map_msgs__srv__ProjectedMapsInfo_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&map_msgs__msg__ProjectedMapInfo__EXPECTED_HASH, map_msgs__msg__ProjectedMapInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = map_msgs__msg__ProjectedMapInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char map_msgs__srv__ProjectedMapsInfo_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field map_msgs__srv__ProjectedMapsInfo_Response__FIELDS[] = {
  {
    {map_msgs__srv__ProjectedMapsInfo_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
map_msgs__srv__ProjectedMapsInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME, 39, 39},
      {map_msgs__srv__ProjectedMapsInfo_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char map_msgs__srv__ProjectedMapsInfo_Event__FIELD_NAME__info[] = "info";
static char map_msgs__srv__ProjectedMapsInfo_Event__FIELD_NAME__request[] = "request";
static char map_msgs__srv__ProjectedMapsInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field map_msgs__srv__ProjectedMapsInfo_Event__FIELDS[] = {
  {
    {map_msgs__srv__ProjectedMapsInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription map_msgs__srv__ProjectedMapsInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {map_msgs__msg__ProjectedMapInfo__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
map_msgs__srv__ProjectedMapsInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {map_msgs__srv__ProjectedMapsInfo_Event__TYPE_NAME, 36, 36},
      {map_msgs__srv__ProjectedMapsInfo_Event__FIELDS, 3, 3},
    },
    {map_msgs__srv__ProjectedMapsInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&map_msgs__msg__ProjectedMapInfo__EXPECTED_HASH, map_msgs__msg__ProjectedMapInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = map_msgs__msg__ProjectedMapInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = map_msgs__srv__ProjectedMapsInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = map_msgs__srv__ProjectedMapsInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "map_msgs/ProjectedMapInfo[] projected_maps_info\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
map_msgs__srv__ProjectedMapsInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {map_msgs__srv__ProjectedMapsInfo__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
map_msgs__srv__ProjectedMapsInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {map_msgs__srv__ProjectedMapsInfo_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
map_msgs__srv__ProjectedMapsInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {map_msgs__srv__ProjectedMapsInfo_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
map_msgs__srv__ProjectedMapsInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {map_msgs__srv__ProjectedMapsInfo_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
map_msgs__srv__ProjectedMapsInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *map_msgs__srv__ProjectedMapsInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *map_msgs__msg__ProjectedMapInfo__get_individual_type_description_source(NULL);
    sources[3] = *map_msgs__srv__ProjectedMapsInfo_Event__get_individual_type_description_source(NULL);
    sources[4] = *map_msgs__srv__ProjectedMapsInfo_Request__get_individual_type_description_source(NULL);
    sources[5] = *map_msgs__srv__ProjectedMapsInfo_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
map_msgs__srv__ProjectedMapsInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *map_msgs__srv__ProjectedMapsInfo_Request__get_individual_type_description_source(NULL),
    sources[1] = *map_msgs__msg__ProjectedMapInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
map_msgs__srv__ProjectedMapsInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *map_msgs__srv__ProjectedMapsInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
map_msgs__srv__ProjectedMapsInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *map_msgs__srv__ProjectedMapsInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *map_msgs__msg__ProjectedMapInfo__get_individual_type_description_source(NULL);
    sources[3] = *map_msgs__srv__ProjectedMapsInfo_Request__get_individual_type_description_source(NULL);
    sources[4] = *map_msgs__srv__ProjectedMapsInfo_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
