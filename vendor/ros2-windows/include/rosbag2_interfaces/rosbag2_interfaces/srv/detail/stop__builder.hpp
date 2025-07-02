// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbag2_interfaces:srv\Stop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosbag2_interfaces/srv/stop.hpp"


#ifndef ROSBAG2_INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_
#define ROSBAG2_INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbag2_interfaces/srv/detail/stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbag2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbag2_interfaces::srv::Stop_Request>()
{
  return ::rosbag2_interfaces::srv::Stop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbag2_interfaces


namespace rosbag2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbag2_interfaces::srv::Stop_Response>()
{
  return ::rosbag2_interfaces::srv::Stop_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbag2_interfaces


namespace rosbag2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Stop_Event_response
{
public:
  explicit Init_Stop_Event_response(::rosbag2_interfaces::srv::Stop_Event & msg)
  : msg_(msg)
  {}
  ::rosbag2_interfaces::srv::Stop_Event response(::rosbag2_interfaces::srv::Stop_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbag2_interfaces::srv::Stop_Event msg_;
};

class Init_Stop_Event_request
{
public:
  explicit Init_Stop_Event_request(::rosbag2_interfaces::srv::Stop_Event & msg)
  : msg_(msg)
  {}
  Init_Stop_Event_response request(::rosbag2_interfaces::srv::Stop_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Stop_Event_response(msg_);
  }

private:
  ::rosbag2_interfaces::srv::Stop_Event msg_;
};

class Init_Stop_Event_info
{
public:
  Init_Stop_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_Event_request info(::rosbag2_interfaces::srv::Stop_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Stop_Event_request(msg_);
  }

private:
  ::rosbag2_interfaces::srv::Stop_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbag2_interfaces::srv::Stop_Event>()
{
  return rosbag2_interfaces::srv::builder::Init_Stop_Event_info();
}

}  // namespace rosbag2_interfaces

#endif  // ROSBAG2_INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_
