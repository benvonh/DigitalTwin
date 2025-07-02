// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rosbag2_test_msgdefs:msg\BasicIdl.idl
// generated code does not contain a copyright notice

#ifndef ROSBAG2_TEST_MSGDEFS__MSG__DETAIL__BASIC_IDL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROSBAG2_TEST_MSGDEFS__MSG__DETAIL__BASIC_IDL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbag2_test_msgdefs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosbag2_test_msgdefs/msg/detail/basic_idl__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rosbag2_test_msgdefs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
cdr_serialize(
  const rosbag2_test_msgdefs::msg::BasicIdl & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosbag2_test_msgdefs::msg::BasicIdl & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
get_serialized_size(
  const rosbag2_test_msgdefs::msg::BasicIdl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
max_serialized_size_BasicIdl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
cdr_serialize_key(
  const rosbag2_test_msgdefs::msg::BasicIdl & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
get_serialized_size_key(
  const rosbag2_test_msgdefs::msg::BasicIdl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
max_serialized_size_key_BasicIdl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosbag2_test_msgdefs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbag2_test_msgdefs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbag2_test_msgdefs, msg, BasicIdl)();

#ifdef __cplusplus
}
#endif

#endif  // ROSBAG2_TEST_MSGDEFS__MSG__DETAIL__BASIC_IDL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
