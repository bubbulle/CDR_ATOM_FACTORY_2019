#include "dvb_hardware/motor.h"

int main(int argc, char** argv)
{
    //Start ROS node
    ros::init(argc, argv, "motor_controller_node");
    ros::NodeHandle n;
    n.setParam("/frequency", 100);
    n.setParam("/motor/outputmin",0);
    n.setParam("/motor/outputmax",255);
    n.setParam("/motor/left/pinPWM/pinPWM", 1);
    n.setParam("/motor/left/pinPWM/pinDirection", 4);
    n.setParam("/motor/left/pinPWM/pinDirection2", 5);

    Motor motor("/motor/left", false);
    motor.setEnable(true);

    motor.spin();
}
