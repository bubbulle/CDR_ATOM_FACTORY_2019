#include "ros/ros.h"
#include "std_msgs/Float32.h"

void hear(const std_msgs::Float32::ConstPtr& msg){
    //std_msgs::Float32 e = msg->data;
    ROS_INFO("eeee");
}

int main(int argc, char** argv){
    ros::init(argc, argv, "test");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("/encoder/left", 1, hear);
}