#include "simple_pid.h"

int main(int argc, char** argv){
    ros::init(argc, argv, "motors_controller_node");

    Simple_Pid pid_left_wheel("/motor/left", "/encoder/left", true);
    Simple_Pid pid_right_wheel("/motor/right", "/encoder/right", true);

    pid_left_wheel.spin();
    pid_right_wheel.spin();
}