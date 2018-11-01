#include <motor_encoder_controller/hardware.h>

Hardware::Hardware(bool debug_mode) :
    debug_mode_(debug_mode),
    hardware_startable_(false),
    hardware_enable_(false),
    freq_(0.001) //1 ms
{   
    //Debug mode
    debug_mode_ = debug_mode;

    /*
		Get all params for ros server
	*/
    if( nh_.hasParam("/frequency") ){
        nh_.param<double_t>("/frequency", freq_);
    }
    else{
		ROS_INFO("Please check if FREQUENCY parameters is set in the ROS Parameter Server !\n");
	}

    rate_ = ros::Duration(freq_);
}

void Hardware::spinOnce(){
    //Do stuffs
}

void Hardware::spin()
{
    //Wait for initialization
    ros::Duration(0.5).sleep();

	while(ros::ok()){
        spinOnce();
		rate_.sleep();
		ros::spinOnce();
	}
}

void Hardware::setEnable(bool state)
{
    hardware_enable_ = state;
}

void Hardware::setStartable(bool state)
{
    hardware_startable_ = state;
}

bool Hardware::getEnable()
{
    return hardware_enable_;
}

bool Hardware::getStartable()
{
    return hardware_startable_;
}