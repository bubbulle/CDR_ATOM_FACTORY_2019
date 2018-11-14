#include "dvb_hardware/motor.h"


int main(int argc, char** argv)
{
    //Start ROS node
    ros::init(argc, argv, "motor_controller_node");
    ros::NodeHandle n;
    
    Motor motorleft("/motor/left", false);
    Motor motorRight("/motor/right", false);

    n.setParam("/frequency", 100);
    n.setParam("/motor/outputmin",0);
    n.setParam("/motor/outputmax",1024);

    n.setParam("/motor/left/pinPWM/pinPWM", 1);
    n.setParam("/motor/left/pinPWM/pinDirection", 4);
    n.setParam("/motor/left/pinPWM/pinDirection2", 5);

    n.setParam("/motor/right/pinPWM/pinPWM", 26);
    n.setParam("/motor/right/pinPWM/pinDirection", 0);
    n.setParam("/motor/right/pinPWM/pinDirection2", 2);
 
    
    motor.setEnable(true);

    motor.spin();
}
