#!/usr/bin/env python3
# Above line indicates script is executed as a Python script using Python3
# This should be run using Python 2
# This ros publisher will publish the rosbag pointcloud data

# Must import rospy when writing a ROS Node
import rospy
import rosbag
import roslib
# Allows us to reuse message types for publishing
from std_msgs.msg import String
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import Image

def callback(data):
	#rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)  # TODO: Revisit This
        rospy.loginfo(rospy.get_caller_id() + "I heard ") 

def subROSBAG():

    rospy.init_node('subROSBAG', anonymous=True)
    sub1 = rospy.Subscriber('/camera/depth_registered/points', PointCloud2, callback)
    sub2 = rospy.Subscriber('/camera/rgb/image_rect_color', Image, callback)

    # spin() simply keeps python from exitiing until this node is stopped
    rospy.spin()



# Catches rospy exception than can be thrown by sleep and rate
# when CTRL-C is pressed or node is shutodwn
if __name__ == '__main__':
    try:
        subROSBAG()
    except rospy.ROSInterruptException:
        pass
