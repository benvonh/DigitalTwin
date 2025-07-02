// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosbag2_test_msgdefs:msg\ComplexMsgDependsOnIdl.idl
// generated code does not contain a copyright notice

#include "rosbag2_test_msgdefs/msg/detail/complex_msg_depends_on_idl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosbag2_test_msgdefs
const rosidl_type_hash_t *
rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0xe0, 0xbc, 0x81, 0x4f, 0x03, 0x56, 0xdd,
      0xc3, 0xea, 0x13, 0xfa, 0xce, 0xa7, 0x6d, 0xc9,
      0x6f, 0xca, 0x79, 0xa5, 0xcf, 0xf4, 0xf2, 0xe4,
      0x74, 0x94, 0x4f, 0x68, 0xd4, 0xf1, 0x40, 0xb1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rosbag2_test_msgdefs/msg/detail/basic_idl__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rosbag2_test_msgdefs__msg__BasicIdl__EXPECTED_HASH = {1, {
    0x87, 0x5f, 0x81, 0x53, 0x79, 0x65, 0xa2, 0x1b,
    0xe3, 0x70, 0x3b, 0xe4, 0x99, 0x22, 0x18, 0x40,
    0x55, 0x80, 0x37, 0xd2, 0xc3, 0xfb, 0xc5, 0x05,
    0x9c, 0x40, 0xa6, 0xb0, 0xd9, 0x4d, 0x67, 0x5f,
  }};
#endif

static char rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__TYPE_NAME[] = "rosbag2_test_msgdefs/msg/ComplexMsgDependsOnIdl";
static char rosbag2_test_msgdefs__msg__BasicIdl__TYPE_NAME[] = "rosbag2_test_msgdefs/msg/BasicIdl";

// Define type names, field names, and default values
static char rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__FIELD_NAME__a[] = "a";

static rosidl_runtime_c__type_description__Field rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__FIELDS[] = {
  {
    {rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosbag2_test_msgdefs__msg__BasicIdl__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rosbag2_test_msgdefs__msg__BasicIdl__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__TYPE_NAME, 47, 47},
      {rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__FIELDS, 1, 1},
    },
    {rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rosbag2_test_msgdefs__msg__BasicIdl__EXPECTED_HASH, rosbag2_test_msgdefs__msg__BasicIdl__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rosbag2_test_msgdefs__msg__BasicIdl__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "rosbag2_test_msgdefs/BasicIdl a";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosbag2_test_msgdefs__msg__ComplexMsgDependsOnIdl__get_individual_type_description_source(NULL),
    sources[1] = *rosbag2_test_msgdefs__msg__BasicIdl__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
