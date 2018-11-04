#include "dvb_hardware/motor.h"

int main(int argc, char** argv)
{
    //Start ROS node
    ros::init(argc, argv, "motor_controller_node");

    Motor motor("/motor", false);

    motor.spin();
}