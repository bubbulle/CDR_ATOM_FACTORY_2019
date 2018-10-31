#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>
#include <string.h>
#include "IncrementalEncoder.h"
#include <sstream>
#include "std_msgs/String.h"
#include "std_msgs/Int32.h"
#include <wiringPi.h>

using namespace std;

IncrementalEncoder::IncrementalEncoder(int pinA, int pinB)
{
    this->pinA = pinA;
    this->pinB = pinB;
    this->pos = 0;
    wiringPiISR(encoder->pinA, INT_EDGE_RISING, &myInterrupt)
    pinMode(encoder->pinB, _IOS_IMPUT);

}

void IncrementalEncoder::increment()
{
    int signalA = digitalRead(pinA);
    int signalB = digitalRead(pinB);

    if (signalB == HIGH)
    {
        --pos;
    }

    else
    {
        ++pos;
    }
}

int main(int argc, char **argv)
{
    // Debut de la node .
    ROS_INFO("Starting node");
    ros::init(argc, argv, "/Encodeur");
    ros::NodeHandle node;
    ros::Rate rate(10);

    wiringPiSetup();

    if (wiringPiSetup() < 0)
    {
        fprintf(stderr, "Unable to setup wiringPi: %s\n", strerror(errno));
        return 1;
    }

    vector<IncrementalEncoder::IncrementalEncoder> incrementalEncoderList;
    incrementalEncoderList.push_back(IncrementalEncoder::IncrementalEncoder(7, 8));   // Encodeur 1
    incrementalEncoderList.push_back(IncrementalEncoder::IncrementalEncoder(17, 18)); // Encodeur 2

    vector<ros::Publisher> encodeur_pubs;

    // Construire un Publisher pour chaque encodeur.
    for (int i = 0; i < incrementalEncoderList.size(); ++i)
    {
        stringstream ss;
        ss << "Encodeur_" << i;
        encodeur_pubs.push_back(node.advertise<std_msgs::Int32>(ss.str(), 10));
    }

    std_msgs::Int32 str_msg;

    while (ros::ok())
    {
        for (int i = 0; i < incrementalEncoderList.size(); ++i)
        {
            str_msg.data = incrementalEncoderList.at[i]->pos;
            ROS_INFO("%d", str_msg.data);
            encodeur_pubs[i].publish(&str_msg);
        }
    }
    return 0;
}