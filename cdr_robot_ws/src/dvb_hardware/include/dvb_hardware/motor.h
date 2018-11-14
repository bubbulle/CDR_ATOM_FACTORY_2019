#ifndef DEF_MOTOR_H
#define DEF_MOTOR_H

#include "dvb_hardware/hardware.h"

class Motor : public Hardware
{
    public:
        Motor(std::string topic_motor_name, bool debug_mode);
        virtual ~Motor();

        virtual void spinOnce();

    private:
        //Topics name
        std::string topic_motor_name_;

        void control_callback(const std_msgs::Int32::ConstPtr& control_msg);

        //Set motor speed
        void control_motor(Int32 pwm, bool trigo_dir);

        //PIN Number
        int32 pinPWM_;
        int32 pinDirection;
	    int32 pinDirection2; 
        //Control stuffs
        int32 pwm_;
        bool trigo_dir_;

        //Motor parameters
        float_t output_min_;
        float_t output_max_;

        /*
		    Subscribers
	    */
        ros::Subscriber sub_motor_;
};

#endif
