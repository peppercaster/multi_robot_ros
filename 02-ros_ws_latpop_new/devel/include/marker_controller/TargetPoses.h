// Generated by gencpp from file marker_controller/TargetPoses.msg
// DO NOT EDIT!


#ifndef MARKER_CONTROLLER_MESSAGE_TARGETPOSES_H
#define MARKER_CONTROLLER_MESSAGE_TARGETPOSES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <marker_controller/TargetPose.h>

namespace marker_controller
{
template <class ContainerAllocator>
struct TargetPoses_
{
  typedef TargetPoses_<ContainerAllocator> Type;

  TargetPoses_()
    : targets()  {
    }
  TargetPoses_(const ContainerAllocator& _alloc)
    : targets(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::marker_controller::TargetPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::marker_controller::TargetPose_<ContainerAllocator> >::other >  _targets_type;
  _targets_type targets;




  typedef boost::shared_ptr< ::marker_controller::TargetPoses_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marker_controller::TargetPoses_<ContainerAllocator> const> ConstPtr;

}; // struct TargetPoses_

typedef ::marker_controller::TargetPoses_<std::allocator<void> > TargetPoses;

typedef boost::shared_ptr< ::marker_controller::TargetPoses > TargetPosesPtr;
typedef boost::shared_ptr< ::marker_controller::TargetPoses const> TargetPosesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marker_controller::TargetPoses_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marker_controller::TargetPoses_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace marker_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'marker_controller': ['/home/alexj/Dropbox/UFMG/04-2-2016/JornalPaper/02-code/03-ros_ws_latpop_new/src/marker_controller/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::marker_controller::TargetPoses_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marker_controller::TargetPoses_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marker_controller::TargetPoses_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marker_controller::TargetPoses_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marker_controller::TargetPoses_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marker_controller::TargetPoses_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marker_controller::TargetPoses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a8172c4ff6212bb43118476f3f97c7b";
  }

  static const char* value(const ::marker_controller::TargetPoses_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a8172c4ff6212bbULL;
  static const uint64_t static_value2 = 0x43118476f3f97c7bULL;
};

template<class ContainerAllocator>
struct DataType< ::marker_controller::TargetPoses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marker_controller/TargetPoses";
  }

  static const char* value(const ::marker_controller::TargetPoses_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marker_controller::TargetPoses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "TargetPose[] targets\n\
\n\
================================================================================\n\
MSG: marker_controller/TargetPose\n\
uint32 id\n\
geometry_msgs/PoseStamped pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::marker_controller::TargetPoses_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marker_controller::TargetPoses_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.targets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TargetPoses_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marker_controller::TargetPoses_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marker_controller::TargetPoses_<ContainerAllocator>& v)
  {
    s << indent << "targets[]" << std::endl;
    for (size_t i = 0; i < v.targets.size(); ++i)
    {
      s << indent << "  targets[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::marker_controller::TargetPose_<ContainerAllocator> >::stream(s, indent + "    ", v.targets[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARKER_CONTROLLER_MESSAGE_TARGETPOSES_H
