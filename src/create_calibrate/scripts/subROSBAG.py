#!/usr/bin/env python3
# PYTHON3 CAUSING ERRORS WITH ROSPY AND ROSLIB
# Above line indicates script is executed as a Python script using Python3
# This should be run using Python 2
# This ros publisher will publish the rosbag pointcloud data

# Must import rospy when writing a ROS Node
# Note: Python 3 does not suppoter ROSBAG DO NOT IMPORT
import rospy
import roslib
import pcl
# Allows us to reuse message types for publishing
from std_msgs.msg import String
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import Image


# callback function gets called when a new message arrives on topic
def callback(data):
	#rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)  # TODO: Revisit This
        rospy.loginfo("received data!")
        # A subscriber can get access to "conection header"
        # This will let us see on which topic the message is from
        # to ensure we are getting messages from both topics we are publishing on
        # for debugging only, gives gross output
        # print(data._connection_header)

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
