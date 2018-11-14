#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>
#include "std_msgs/Bool.h"
#include "wiringPi.h"


//Wiring PI 1
#define dir 4
#define dira 5
#define pwm 1

#define a 26
#define b 0
#define c 2


void blink_callback(const std_msgs::Int32::ConstPtr& msg){
 if(msg->data > 0){

 	//digitalWrite(pwm,HIGH);
	pwmWrite(pwm,msg->data);
	digitalWrite (dir, HIGH) ;
	digitalWrite (dira, LOW) ; 

	pwmWrite(a,msg->data);
	digitalWrite (b, HIGH) ;
	digitalWrite (c, LOW) ; 

	ROS_INFO("OK");
  }

 if(msg->data == 0){
	pwmWrite(pwm,0);
	digitalWrite (dir, HIGH) ;
	digitalWrite (dira, LOW) ; 

	pwmWrite(a,0);
	digitalWrite (b, HIGH) ;
	digitalWrite (c, LOW) ;
	ROS_INFO("OK"); 	 

  }	
}

int main(int argc, char** argv)
{
	ros::init(argc, argv,"blink_led");
	ROS_INFO("Started Odroid-C1 Blink Node");
	wiringPiSetup ();
	pinMode(pwm,PWM_OUTPUT);
        pinMode(dir,OUTPUT);
        pinMode(dira,OUTPUT);

	pinMode(a,PWM_OUTPUT);
        pinMode(b,OUTPUT);
        pinMode(c,OUTPUT);
	
        ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("led_blink",10,blink_callback);
	ros::spin();

}

