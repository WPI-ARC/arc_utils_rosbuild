/* Auto-generated by genmsg_cpp for file /home/calderpg/Dropbox/arc-ros-dev/ros_email/msg/attachment.msg */
#ifndef ROS_EMAIL_MESSAGE_ATTACHMENT_H
#define ROS_EMAIL_MESSAGE_ATTACHMENT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace ros_email
{
template <class ContainerAllocator>
struct attachment_ {
  typedef attachment_<ContainerAllocator> Type;

  attachment_()
  : name()
  , data()
  {
  }

  attachment_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , data(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  data;


  typedef boost::shared_ptr< ::ros_email::attachment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_email::attachment_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct attachment
typedef  ::ros_email::attachment_<std::allocator<void> > attachment;

typedef boost::shared_ptr< ::ros_email::attachment> attachmentPtr;
typedef boost::shared_ptr< ::ros_email::attachment const> attachmentConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ros_email::attachment_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ros_email::attachment_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ros_email

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ros_email::attachment_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ros_email::attachment_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ros_email::attachment_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9072a2397a46e9f591fb260e7815d049";
  }

  static const char* value(const  ::ros_email::attachment_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9072a2397a46e9f5ULL;
  static const uint64_t static_value2 = 0x91fb260e7815d049ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_email::attachment_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ros_email/attachment";
  }

  static const char* value(const  ::ros_email::attachment_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ros_email::attachment_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name\n\
uint8[] data\n\
\n\
";
  }

  static const char* value(const  ::ros_email::attachment_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ros_email::attachment_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct attachment_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_email::attachment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ros_email::attachment_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROS_EMAIL_MESSAGE_ATTACHMENT_H
