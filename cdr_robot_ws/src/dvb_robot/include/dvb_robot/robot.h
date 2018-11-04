#ifndef DEF_ROBOT_H
#define DEF_ROBOT_H

#include <vector>

//Ros lib
#include "ros/ros.h"
#include "ros/console.h"

//Ros messages
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Pose2D.h"

//DVB Lib
#include "dvb_hardware/hardware.h"

class Robot
{
    public:
        Robot(bool debug_mode);

    private:
        bool debug_mode_;
        
};

#endif