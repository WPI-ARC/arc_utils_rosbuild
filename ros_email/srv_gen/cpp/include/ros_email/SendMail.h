/* Auto-generated by genmsg_cpp for file /home/calderpg/Dropbox/arc-ros-dev/ros_email/srv/SendMail.srv */
#ifndef ROS_EMAIL_SERVICE_SENDMAIL_H
#define ROS_EMAIL_SERVICE_SENDMAIL_H
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

#include "ros/service_traits.h"




namespace ros_email
{
template <class ContainerAllocator>
struct SendMailRequest_ {
  typedef SendMailRequest_<ContainerAllocator> Type;

  SendMailRequest_()
  : recipient()
  , message_title()
  , message_text()
  {
  }

  SendMailRequest_(const ContainerAllocator& _alloc)
  : recipient(_alloc)
  , message_title(_alloc)
  , message_text(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _recipient_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  recipient;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_title_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  message_title;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_text_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  message_text;


  typedef boost::shared_ptr< ::ros_email::SendMailRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_email::SendMailRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SendMailRequest
typedef  ::ros_email::SendMailRequest_<std::allocator<void> > SendMailRequest;

typedef boost::shared_ptr< ::ros_email::SendMailRequest> SendMailRequestPtr;
typedef boost::shared_ptr< ::ros_email::SendMailRequest const> SendMailRequestConstPtr;


template <class ContainerAllocator>
struct SendMailResponse_ {
  typedef SendMailResponse_<ContainerAllocator> Type;

  SendMailResponse_()
  : result(0)
  {
  }

  SendMailResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;


  typedef boost::shared_ptr< ::ros_email::SendMailResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_email::SendMailResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SendMailResponse
typedef  ::ros_email::SendMailResponse_<std::allocator<void> > SendMailResponse;

typedef boost::shared_ptr< ::ros_email::SendMailResponse> SendMailResponsePtr;
typedef boost::shared_ptr< ::ros_email::SendMailResponse const> SendMailResponseConstPtr;

struct SendMail
{

typedef SendMailRequest Request;
typedef SendMailResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SendMail
} // namespace ros_email

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ros_email::SendMailRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ros_email::SendMailRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ros_email::SendMailRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c71328e6f27fb5d4b2a4a5a11cc6275b";
  }

  static const char* value(const  ::ros_email::SendMailRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc71328e6f27fb5d4ULL;
  static const uint64_t static_value2 = 0xb2a4a5a11cc6275bULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_email::SendMailRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ros_email/SendMailRequest";
  }

  static const char* value(const  ::ros_email::SendMailRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ros_email::SendMailRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string recipient\n\
string message_title\n\
string message_text\n\
\n\
";
  }

  static const char* value(const  ::ros_email::SendMailRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ros_email::SendMailResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ros_email::SendMailResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ros_email::SendMailResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const  ::ros_email::SendMailResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_email::SendMailResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ros_email/SendMailResponse";
  }

  static const char* value(const  ::ros_email::SendMailResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ros_email::SendMailResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::ros_email::SendMailResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ros_email::SendMailResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ros_email::SendMailRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.recipient);
    stream.next(m.message_title);
    stream.next(m.message_text);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SendMailRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ros_email::SendMailResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SendMailResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<ros_email::SendMail> {
  static const char* value() 
  {
    return "25ef44040d00a93026bbb56d92b31450";
  }

  static const char* value(const ros_email::SendMail&) { return value(); } 
};

template<>
struct DataType<ros_email::SendMail> {
  static const char* value() 
  {
    return "ros_email/SendMail";
  }

  static const char* value(const ros_email::SendMail&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ros_email::SendMailRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "25ef44040d00a93026bbb56d92b31450";
  }

  static const char* value(const ros_email::SendMailRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ros_email::SendMailRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ros_email/SendMail";
  }

  static const char* value(const ros_email::SendMailRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ros_email::SendMailResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "25ef44040d00a93026bbb56d92b31450";
  }

  static const char* value(const ros_email::SendMailResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ros_email::SendMailResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ros_email/SendMail";
  }

  static const char* value(const ros_email::SendMailResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROS_EMAIL_SERVICE_SENDMAIL_H

