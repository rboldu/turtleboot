// Generated by gencpp from file navigation/sensor_raw_data.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MESSAGE_SENSOR_RAW_DATA_H
#define NAVIGATION_MESSAGE_SENSOR_RAW_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace navigation
{
template <class ContainerAllocator>
struct sensor_raw_data_
{
  typedef sensor_raw_data_<ContainerAllocator> Type;

  sensor_raw_data_()
    : averagePosition(0)  {
    }
  sensor_raw_data_(const ContainerAllocator& _alloc)
    : averagePosition(0)  {
  (void)_alloc;
    }



   typedef int8_t _averagePosition_type;
  _averagePosition_type averagePosition;




  typedef boost::shared_ptr< ::navigation::sensor_raw_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation::sensor_raw_data_<ContainerAllocator> const> ConstPtr;

}; // struct sensor_raw_data_

typedef ::navigation::sensor_raw_data_<std::allocator<void> > sensor_raw_data;

typedef boost::shared_ptr< ::navigation::sensor_raw_data > sensor_raw_dataPtr;
typedef boost::shared_ptr< ::navigation::sensor_raw_data const> sensor_raw_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navigation::sensor_raw_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navigation::sensor_raw_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace navigation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'navigation': ['/home/ahlab/AirTurtle/basic_functionalities/navigation/src/navigation/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::navigation::sensor_raw_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navigation::sensor_raw_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::sensor_raw_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::sensor_raw_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::sensor_raw_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::sensor_raw_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navigation::sensor_raw_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d206a64c7d7498ae43986f17623d9c0b";
  }

  static const char* value(const ::navigation::sensor_raw_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd206a64c7d7498aeULL;
  static const uint64_t static_value2 = 0x43986f17623d9c0bULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation::sensor_raw_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navigation/sensor_raw_data";
  }

  static const char* value(const ::navigation::sensor_raw_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navigation::sensor_raw_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 averagePosition\n\
\n\
";
  }

  static const char* value(const ::navigation::sensor_raw_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navigation::sensor_raw_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.averagePosition);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct sensor_raw_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation::sensor_raw_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navigation::sensor_raw_data_<ContainerAllocator>& v)
  {
    s << indent << "averagePosition: ";
    Printer<int8_t>::stream(s, indent + "  ", v.averagePosition);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_MESSAGE_SENSOR_RAW_DATA_H
