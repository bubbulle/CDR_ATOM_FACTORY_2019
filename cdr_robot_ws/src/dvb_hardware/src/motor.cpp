#include "dvb_hardware/motor.h"
#include <wiringPi.h>

Motor::Motor(std::string topic_motor_name, bool debug_mode) :
    Hardware(debug_mode)
{
    topic_motor_name_ = topic_motor_name;

    //Get motor PIN params
    char paramPinPWM[50];
    char paramPinDirection[50];
    char paramPinDirection2[50];

    sprintf(paramPinPWM, "%s/pinPWM", topic_motor_name_.c_str());
    sprintf(paramPinDirection, "%s/pinDirection", topic_motor_name_.c_str());
    sprintf(paramPinDirection2, "%s/pinDirection2", topic_motor_name_.c_str());

    std::string pin_pwm = paramPinPWM;
    std::string pin_dir = paramPinDirection;
    std::string pin_dir2 = paramPinDirection2;
    wiringPiSetup ();
    if (
			nh_.hasParam(pin_pwm)  ||
            nh_.hasParam(pin_dir)  ||
            nh_.hasParam(pin_dir2) ||
            nh_.hasParam("/motor/outputmin") ||
            nh_.hasParam("/motor/outputmax") ||
            wiringPiSetup() < 0
    )
    {
        nh_.param<int32_t>(pin_pwm, pinPWM_);
        nh_.param<int32_t>(pin_dir, pinDirection);
        nh_.param<int32_t>(pin_dir2, pinDirection2);
        nh_.param<float_t>("/motor/outputmin", output_min_);
        nh_.param<float_t>("/motor/outputmax", output_max_);
        pinMode(pinPWM_,OUTPUT);      //ENA
        pinMode(pinDirection,OUTPUT); //IN1
        pinMode(pinDirection2,OUTPUT);//IN2

        hardware_startable_ = true;
    }
    else{
		ROS_INFO("Please check if motor PIN parameters are set in the ROS Parameter Server !\n");
	}

    /*
		Subscribers
	*/
	sub_motor_ = nh_.subscribe(topic_motor_name_.c_str(), 10, &Motor::control_callback, this);
}

Motor::~Motor(){

}

void Motor::spinOnce(){
    
}

void Motor::control_motor(int32_t pwm, bool trigo_dir)
{
    analogWrite(pinPWM_, pwm); //speed 0 - 255 
    if (trigo_dir == false) {
    digitalWrite(pinDirection, LOW);
    digitalWrite(pinDirection2, HIGH);
    }
    else {
    digitalWrite(pinDirection, HIGH);
    digitalWrite(pinDirection2,LOW);   
    }
   
}

void Motor::control_callback(const std_msgs::Int32::ConstPtr& control_msg)
{
    /*
        TODO : Check if exists ros msg to control pwm and direction
    */
    ROS_INFO_COND(debug_mode_, "%s : %d", topic_motor_name_.c_str(), control_msg->data);

    if(hardware_enable_ && hardware_startable_){
		Motor::control_motor(control_msg->data, true);

		ros::Duration(freq_).sleep();
	}
	else{
		ROS_INFO_COND(debug_mode_,"PID Controller disabled");
	}
}
