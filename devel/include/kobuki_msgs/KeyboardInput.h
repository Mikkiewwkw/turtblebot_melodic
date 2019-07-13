// Generated by gencpp from file kobuki_msgs/KeyboardInput.msg
// DO NOT EDIT!


#ifndef KOBUKI_MSGS_MESSAGE_KEYBOARDINPUT_H
#define KOBUKI_MSGS_MESSAGE_KEYBOARDINPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kobuki_msgs
{
template <class ContainerAllocator>
struct KeyboardInput_
{
  typedef KeyboardInput_<ContainerAllocator> Type;

  KeyboardInput_()
    : pressedKey(0)  {
    }
  KeyboardInput_(const ContainerAllocator& _alloc)
    : pressedKey(0)  {
  (void)_alloc;
    }



   typedef uint8_t _pressedKey_type;
  _pressedKey_type pressedKey;



  enum {
    KeyCode_Right = 67u,
    KeyCode_Left = 68u,
    KeyCode_Up = 65u,
    KeyCode_Down = 66u,
    KeyCode_Space = 32u,
    KeyCode_Enable = 101u,
    KeyCode_Disable = 100u,
  };


  typedef boost::shared_ptr< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> const> ConstPtr;

}; // struct KeyboardInput_

typedef ::kobuki_msgs::KeyboardInput_<std::allocator<void> > KeyboardInput;

typedef boost::shared_ptr< ::kobuki_msgs::KeyboardInput > KeyboardInputPtr;
typedef boost::shared_ptr< ::kobuki_msgs::KeyboardInput const> KeyboardInputConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kobuki_msgs::KeyboardInput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kobuki_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'kobuki_msgs': ['/home/mapping/catkin_ws/src/kobuki_msgs/msg', '/home/mapping/catkin_ws/devel/share/kobuki_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9288b95cb32b48719d84d696be253401";
  }

  static const char* value(const ::kobuki_msgs::KeyboardInput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9288b95cb32b4871ULL;
  static const uint64_t static_value2 = 0x9d84d696be253401ULL;
};

template<class ContainerAllocator>
struct DataType< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kobuki_msgs/KeyboardInput";
  }

  static const char* value(const ::kobuki_msgs::KeyboardInput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# KEYBOARD INPUT\n"
"# \n"
"# Keycodes to be transferred for remote teleops.\n"
"\n"
"uint8  KeyCode_Right    = 67     # 0x43\n"
"uint8  KeyCode_Left     = 68     # 0x44\n"
"uint8  KeyCode_Up       = 65     # 0x41\n"
"uint8  KeyCode_Down     = 66     # 0x42\n"
"uint8  KeyCode_Space    = 32     # 0x20\n"
"uint8  KeyCode_Enable   = 101    # 0x65, 'e'\n"
"uint8  KeyCode_Disable  = 100    # 0x64, 'd'\n"
"\n"
"uint8 pressedKey\n"
;
  }

  static const char* value(const ::kobuki_msgs::KeyboardInput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pressedKey);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyboardInput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kobuki_msgs::KeyboardInput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kobuki_msgs::KeyboardInput_<ContainerAllocator>& v)
  {
    s << indent << "pressedKey: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pressedKey);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOBUKI_MSGS_MESSAGE_KEYBOARDINPUT_H
