// Generated by gencpp from file topic_node/Per.msg
// DO NOT EDIT!


#ifndef TOPIC_NODE_MESSAGE_PER_H
#define TOPIC_NODE_MESSAGE_PER_H

#include <ros/service_traits.h>


#include <topic_node/PerRequest.h>
#include <topic_node/PerResponse.h>


namespace topic_node
{

struct Per
{

typedef PerRequest Request;
typedef PerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Per
} // namespace topic_node


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::topic_node::Per > {
  static const char* value()
  {
    return "4781436a0c2affec8025955a6041e481";
  }

  static const char* value(const ::topic_node::Per&) { return value(); }
};

template<>
struct DataType< ::topic_node::Per > {
  static const char* value()
  {
    return "topic_node/Per";
  }

  static const char* value(const ::topic_node::Per&) { return value(); }
};


// service_traits::MD5Sum< ::topic_node::PerRequest> should match
// service_traits::MD5Sum< ::topic_node::Per >
template<>
struct MD5Sum< ::topic_node::PerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::topic_node::Per >::value();
  }
  static const char* value(const ::topic_node::PerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::topic_node::PerRequest> should match
// service_traits::DataType< ::topic_node::Per >
template<>
struct DataType< ::topic_node::PerRequest>
{
  static const char* value()
  {
    return DataType< ::topic_node::Per >::value();
  }
  static const char* value(const ::topic_node::PerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::topic_node::PerResponse> should match
// service_traits::MD5Sum< ::topic_node::Per >
template<>
struct MD5Sum< ::topic_node::PerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::topic_node::Per >::value();
  }
  static const char* value(const ::topic_node::PerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::topic_node::PerResponse> should match
// service_traits::DataType< ::topic_node::Per >
template<>
struct DataType< ::topic_node::PerResponse>
{
  static const char* value()
  {
    return DataType< ::topic_node::Per >::value();
  }
  static const char* value(const ::topic_node::PerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOPIC_NODE_MESSAGE_PER_H
