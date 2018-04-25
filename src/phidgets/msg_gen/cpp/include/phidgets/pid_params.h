/* Auto-generated by genmsg_cpp for file /home/vader/catkin_ws/src/phidgets/msg/pid_params.msg */
#ifndef PHIDGETS_MESSAGE_PID_PARAMS_H
#define PHIDGETS_MESSAGE_PID_PARAMS_H
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

#include "std_msgs/Header.h"

namespace phidgets
{
template <class ContainerAllocator>
struct pid_params_ {
  typedef pid_params_<ContainerAllocator> Type;

  pid_params_()
  : header()
  , index(0)
  , mode(0)
  , direction(0)
  , target_position(0)
  , target_velocity(0.0)
  , p_gain(0.0)
  , i_gain(0.0)
  , d_gain(0.0)
  , acc_ff(0.0)
  , fri_ff(0.0)
  , vel_ff(0.0)
  , hold(0.0)
  , bias(0.0)
  , accel(0.0)
  , trans(0.0)
  , lag(0.0)
  , min(0.0)
  , max(0.0)
  , slew(0.0)
  {
  }

  pid_params_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , index(0)
  , mode(0)
  , direction(0)
  , target_position(0)
  , target_velocity(0.0)
  , p_gain(0.0)
  , i_gain(0.0)
  , d_gain(0.0)
  , acc_ff(0.0)
  , fri_ff(0.0)
  , vel_ff(0.0)
  , hold(0.0)
  , bias(0.0)
  , accel(0.0)
  , trans(0.0)
  , lag(0.0)
  , min(0.0)
  , max(0.0)
  , slew(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef int32_t _index_type;
  int32_t index;

  typedef int32_t _mode_type;
  int32_t mode;

  typedef int32_t _direction_type;
  int32_t direction;

  typedef int32_t _target_position_type;
  int32_t target_position;

  typedef float _target_velocity_type;
  float target_velocity;

  typedef float _p_gain_type;
  float p_gain;

  typedef float _i_gain_type;
  float i_gain;

  typedef float _d_gain_type;
  float d_gain;

  typedef float _acc_ff_type;
  float acc_ff;

  typedef float _fri_ff_type;
  float fri_ff;

  typedef float _vel_ff_type;
  float vel_ff;

  typedef float _hold_type;
  float hold;

  typedef float _bias_type;
  float bias;

  typedef float _accel_type;
  float accel;

  typedef float _trans_type;
  float trans;

  typedef float _lag_type;
  float lag;

  typedef float _min_type;
  float min;

  typedef float _max_type;
  float max;

  typedef float _slew_type;
  float slew;


  typedef boost::shared_ptr< ::phidgets::pid_params_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phidgets::pid_params_<ContainerAllocator>  const> ConstPtr;
}; // struct pid_params
typedef  ::phidgets::pid_params_<std::allocator<void> > pid_params;

typedef boost::shared_ptr< ::phidgets::pid_params> pid_paramsPtr;
typedef boost::shared_ptr< ::phidgets::pid_params const> pid_paramsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::phidgets::pid_params_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::phidgets::pid_params_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace phidgets

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::phidgets::pid_params_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::phidgets::pid_params_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::phidgets::pid_params_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9d70688daa83757a45f48acc5f836447";
  }

  static const char* value(const  ::phidgets::pid_params_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9d70688daa83757aULL;
  static const uint64_t static_value2 = 0x45f48acc5f836447ULL;
};

template<class ContainerAllocator>
struct DataType< ::phidgets::pid_params_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/pid_params";
  }

  static const char* value(const  ::phidgets::pid_params_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phidgets::pid_params_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
int32 index\n\
int32 mode\n\
int32 direction\n\
int32 target_position\n\
float32 target_velocity\n\
float32 p_gain\n\
float32 i_gain\n\
float32 d_gain\n\
float32 acc_ff\n\
float32 fri_ff\n\
float32 vel_ff\n\
float32 hold\n\
float32 bias\n\
float32 accel\n\
float32 trans\n\
float32 lag\n\
float32 min\n\
float32 max\n\
float32 slew\n\
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
";
  }

  static const char* value(const  ::phidgets::pid_params_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::phidgets::pid_params_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::phidgets::pid_params_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phidgets::pid_params_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.index);
    stream.next(m.mode);
    stream.next(m.direction);
    stream.next(m.target_position);
    stream.next(m.target_velocity);
    stream.next(m.p_gain);
    stream.next(m.i_gain);
    stream.next(m.d_gain);
    stream.next(m.acc_ff);
    stream.next(m.fri_ff);
    stream.next(m.vel_ff);
    stream.next(m.hold);
    stream.next(m.bias);
    stream.next(m.accel);
    stream.next(m.trans);
    stream.next(m.lag);
    stream.next(m.min);
    stream.next(m.max);
    stream.next(m.slew);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct pid_params_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phidgets::pid_params_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::phidgets::pid_params_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.direction);
    s << indent << "target_position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.target_position);
    s << indent << "target_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.target_velocity);
    s << indent << "p_gain: ";
    Printer<float>::stream(s, indent + "  ", v.p_gain);
    s << indent << "i_gain: ";
    Printer<float>::stream(s, indent + "  ", v.i_gain);
    s << indent << "d_gain: ";
    Printer<float>::stream(s, indent + "  ", v.d_gain);
    s << indent << "acc_ff: ";
    Printer<float>::stream(s, indent + "  ", v.acc_ff);
    s << indent << "fri_ff: ";
    Printer<float>::stream(s, indent + "  ", v.fri_ff);
    s << indent << "vel_ff: ";
    Printer<float>::stream(s, indent + "  ", v.vel_ff);
    s << indent << "hold: ";
    Printer<float>::stream(s, indent + "  ", v.hold);
    s << indent << "bias: ";
    Printer<float>::stream(s, indent + "  ", v.bias);
    s << indent << "accel: ";
    Printer<float>::stream(s, indent + "  ", v.accel);
    s << indent << "trans: ";
    Printer<float>::stream(s, indent + "  ", v.trans);
    s << indent << "lag: ";
    Printer<float>::stream(s, indent + "  ", v.lag);
    s << indent << "min: ";
    Printer<float>::stream(s, indent + "  ", v.min);
    s << indent << "max: ";
    Printer<float>::stream(s, indent + "  ", v.max);
    s << indent << "slew: ";
    Printer<float>::stream(s, indent + "  ", v.slew);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PHIDGETS_MESSAGE_PID_PARAMS_H

