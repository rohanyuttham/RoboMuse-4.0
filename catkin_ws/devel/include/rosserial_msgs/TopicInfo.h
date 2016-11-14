// Generated by gencpp from file rosserial_msgs/TopicInfo.msg
// DO NOT EDIT!


#ifndef ROSSERIAL_MSGS_MESSAGE_TOPICINFO_H
#define ROSSERIAL_MSGS_MESSAGE_TOPICINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosserial_msgs
{
template <class ContainerAllocator>
struct TopicInfo_
{
  typedef TopicInfo_<ContainerAllocator> Type;

  TopicInfo_()
    : topic_id(0)
    , topic_name()
    , message_type()
    , md5sum()
    , buffer_size(0)  {
    }
  TopicInfo_(const ContainerAllocator& _alloc)
    : topic_id(0)
    , topic_name(_alloc)
    , message_type(_alloc)
    , md5sum(_alloc)
    , buffer_size(0)  {
  (void)_alloc;
    }



   typedef uint16_t _topic_id_type;
  _topic_id_type topic_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_name_type;
  _topic_name_type topic_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type_type;
  _message_type_type message_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _md5sum_type;
  _md5sum_type md5sum;

   typedef int32_t _buffer_size_type;
  _buffer_size_type buffer_size;


    enum { ID_PUBLISHER = 0u };
     enum { ID_SUBSCRIBER = 1u };
     enum { ID_SERVICE_SERVER = 2u };
     enum { ID_SERVICE_CLIENT = 4u };
     enum { ID_PARAMETER_REQUEST = 6u };
     enum { ID_LOG = 7u };
     enum { ID_TIME = 10u };
     enum { ID_TX_STOP = 11u };
 

  typedef boost::shared_ptr< ::rosserial_msgs::TopicInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosserial_msgs::TopicInfo_<ContainerAllocator> const> ConstPtr;

}; // struct TopicInfo_

typedef ::rosserial_msgs::TopicInfo_<std::allocator<void> > TopicInfo;

typedef boost::shared_ptr< ::rosserial_msgs::TopicInfo > TopicInfoPtr;
typedef boost::shared_ptr< ::rosserial_msgs::TopicInfo const> TopicInfoConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosserial_msgs::TopicInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosserial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosserial_msgs': ['/home/dell/catkin_ws/src/rosserial/rosserial_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosserial_msgs::TopicInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosserial_msgs::TopicInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosserial_msgs::TopicInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ad51f88fc44892f8c10684077646005";
  }

  static const char* value(const ::rosserial_msgs::TopicInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ad51f88fc44892fULL;
  static const uint64_t static_value2 = 0x8c10684077646005ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosserial_msgs/TopicInfo";
  }

  static const char* value(const ::rosserial_msgs::TopicInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# special topic_ids\n\
uint16 ID_PUBLISHER=0\n\
uint16 ID_SUBSCRIBER=1\n\
uint16 ID_SERVICE_SERVER=2\n\
uint16 ID_SERVICE_CLIENT=4\n\
uint16 ID_PARAMETER_REQUEST=6\n\
uint16 ID_LOG=7\n\
uint16 ID_TIME=10\n\
uint16 ID_TX_STOP=11\n\
\n\
# The endpoint ID for this topic\n\
uint16 topic_id\n\
\n\
string topic_name\n\
string message_type\n\
\n\
# MD5 checksum for this message type\n\
string md5sum\n\
\n\
# size of the buffer message must fit in\n\
int32 buffer_size\n\
";
  }

  static const char* value(const ::rosserial_msgs::TopicInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic_id);
      stream.next(m.topic_name);
      stream.next(m.message_type);
      stream.next(m.md5sum);
      stream.next(m.buffer_size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TopicInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosserial_msgs::TopicInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosserial_msgs::TopicInfo_<ContainerAllocator>& v)
  {
    s << indent << "topic_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.topic_id);
    s << indent << "topic_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic_name);
    s << indent << "message_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message_type);
    s << indent << "md5sum: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.md5sum);
    s << indent << "buffer_size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.buffer_size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSSERIAL_MSGS_MESSAGE_TOPICINFO_H
