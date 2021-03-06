#!/usr/bin/env python2
# Above line indicates script is executed as a Python script
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

def pubROSBAG():

    # Get rosbag
    bag = rosbag.Bag('/home/vader/CSE280/ptcdata.bag');

    # Declares what topic your node is publishing to and the message type
    # Queue size limits the amount of queues messages if subscriber is not recieving messages
    # fast enough
    pub1 = rospy.Publisher('/camera/depth_registered/points', PointCloud2, queue_size=10)
    pub2 = rospy.Publisher('/camera/rgb/image_rect_color', Image, queue_size=10)

    # Tells rospy the name of the node
    # rospy won't be able to communicate with master until this happens
    # anonymous=True ensures node has a unique name
    rospy.init_node('pubROSBAG', anonymous=True)
    # loops at a desired rate
    rate = rospy.Rate(10) # 10hz


    # shutdown checks for CTRL-C and otherwise loops
    while not rospy.is_shutdown():
	# script for read rosbag data
	for (topic, msg, t) in bag.read_messages():
          	# publishes a string to topic
		if topic == "/camera/depth_registered/points":
                        print('Publisher 1')
                        # log for debugging
                        #rospy.loginfo(msg)
                        # for testing purposes
			# print(msg)
            		pub1.publish(msg)
                if topic == "/camera/rgb/image_rect_color":
			print('Publiser 2')
                        # log for debugging
                        #rospy.loginfo(msg)
			pub2.publish(msg)
          	# sleeps to maintain desired rate
          	rate.sleep()


# Catches rospy exception than can be thrown by sleep and rate
# when CTRL-C is pressed or node is shutodwn
if __name__ == '__main__':
    try:
        pubROSBAG()
    except rospy.ROSInterruptException:
        pass
