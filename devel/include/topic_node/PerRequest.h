// Generated by gencpp from file topic_node/PerRequest.msg
// DO NOT EDIT!


#ifndef TOPIC_NODE_MESSAGE_PERREQUEST_H
#define TOPIC_NODE_MESSAGE_PERREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace topic_node
{
template <class ContainerAllocator>
struct PerRequest_
{
  typedef PerRequest_<ContainerAllocator> Type;

  PerRequest_()
    : num1(0)
    , num2(0)  {
    }
  PerRequest_(const ContainerAllocator& _alloc)
    : num1(0)
    , num2(0)  {
  (void)_alloc;
    }



   typedef int32_t _num1_type;
  _num1_type num1;

   typedef int32_t _num2_type;
  _num2_type num2;





  typedef boost::shared_ptr< ::topic_node::PerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::topic_node::PerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PerRequest_

typedef ::topic_node::PerRequest_<std::allocator<void> > PerRequest;

typedef boost::shared_ptr< ::topic_node::PerRequest > PerRequestPtr;
typedef boost::shared_ptr< ::topic_node::PerRequest const> PerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::topic_node::PerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::topic_node::PerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::topic_node::PerRequest_<ContainerAllocator1> & lhs, const ::topic_node::PerRequest_<ContainerAllocator2> & rhs)
{
  return lhs.num1 == rhs.num1 &&
    lhs.num2 == rhs.num2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::topic_node::PerRequest_<ContainerAllocator1> & lhs, const ::topic_node::PerRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace topic_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::topic_node::PerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_node::PerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_node::PerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_node::PerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_node::PerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_node::PerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::topic_node::PerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c68f3979e1a90aac7d1c75a1096d1e60";
  }

  static const char* value(const ::topic_node::PerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc68f3979e1a90aacULL;
  static const uint64_t static_value2 = 0x7d1c75a1096d1e60ULL;
};

template<class ContainerAllocator>
struct DataType< ::topic_node::PerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "topic_node/PerRequest";
  }

  static const char* value(const ::topic_node::PerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::topic_node::PerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 客户端请求时发送的两个数字\n"
"int32 num1\n"
"int32 num2\n"
;
  }

  static const char* value(const ::topic_node::PerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::topic_node::PerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num1);
      stream.next(m.num2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::topic_node::PerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::topic_node::PerRequest_<ContainerAllocator>& v)
  {
    s << indent << "num1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num1);
    s << indent << "num2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOPIC_NODE_MESSAGE_PERREQUEST_H
