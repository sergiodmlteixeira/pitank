// Generated by gencpp from file game_engine/RobotDescriptionArray.msg
// DO NOT EDIT!


#ifndef GAME_ENGINE_MESSAGE_ROBOTDESCRIPTIONARRAY_H
#define GAME_ENGINE_MESSAGE_ROBOTDESCRIPTIONARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <game_engine/RobotDescription.h>

namespace game_engine
{
template <class ContainerAllocator>
struct RobotDescriptionArray_
{
  typedef RobotDescriptionArray_<ContainerAllocator> Type;

  RobotDescriptionArray_()
    : robot()  {
    }
  RobotDescriptionArray_(const ContainerAllocator& _alloc)
    : robot(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::game_engine::RobotDescription_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::game_engine::RobotDescription_<ContainerAllocator> >::other >  _robot_type;
  _robot_type robot;





  typedef boost::shared_ptr< ::game_engine::RobotDescriptionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::game_engine::RobotDescriptionArray_<ContainerAllocator> const> ConstPtr;

}; // struct RobotDescriptionArray_

typedef ::game_engine::RobotDescriptionArray_<std::allocator<void> > RobotDescriptionArray;

typedef boost::shared_ptr< ::game_engine::RobotDescriptionArray > RobotDescriptionArrayPtr;
typedef boost::shared_ptr< ::game_engine::RobotDescriptionArray const> RobotDescriptionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::game_engine::RobotDescriptionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace game_engine

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'game_engine': ['/home/sergio/Downloads/3pi_gaming/src/game_engine/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::game_engine::RobotDescriptionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_engine::RobotDescriptionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_engine::RobotDescriptionArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4200d8a7d47e39131affb929c77aa595";
  }

  static const char* value(const ::game_engine::RobotDescriptionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4200d8a7d47e3913ULL;
  static const uint64_t static_value2 = 0x1affb929c77aa595ULL;
};

template<class ContainerAllocator>
struct DataType< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "game_engine/RobotDescriptionArray";
  }

  static const char* value(const ::game_engine::RobotDescriptionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RobotDescription[] robot\n\
\n\
================================================================================\n\
MSG: game_engine/RobotDescription\n\
int8 teamId\n\
int8 tagId\n\
int16 x\n\
int16 y\n\
float32 height\n\
float32 angle\n\
uint8 addr0\n\
uint8 addr1\n\
int8 vel1\n\
int8 vel2\n\
int8 previous_vel\n\
bool collisionFlag\n\
bool threadIsRunning\n\
int8 collisionStateVar\n\
bool autonomous_drive\n\
bool immobilized\n\
int8 damage\n\
int8 kills\n\
\n\
";
  }

  static const char* value(const ::game_engine::RobotDescriptionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robot);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotDescriptionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::game_engine::RobotDescriptionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::game_engine::RobotDescriptionArray_<ContainerAllocator>& v)
  {
    s << indent << "robot[]" << std::endl;
    for (size_t i = 0; i < v.robot.size(); ++i)
    {
      s << indent << "  robot[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::game_engine::RobotDescription_<ContainerAllocator> >::stream(s, indent + "    ", v.robot[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAME_ENGINE_MESSAGE_ROBOTDESCRIPTIONARRAY_H