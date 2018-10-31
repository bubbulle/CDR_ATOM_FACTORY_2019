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
    this->pinA = pinADroit;
    this->pinB = pinBGauche;

    init();
}

void IncrementalEncoder::increment()
{
   int signalA = digitalRead(encoder->pinSignalA);
   int signalB = digitalRead(encoder->pinSignalB);
   
   if (signalB == HIGH){
      --encoder->pos;
   }

   else{
      ++encoder->pos;
   }
}



void IncrementalEncoder::init()
{
    //Initialisation des encodeurs
    if (pinB == 2)
        encoder->pinSignalA = 0;
    if (pinB == 3)
        encoder->pinSignalA = 1;

    encoder->pinSignalB = pinB;

    encoder->pos = 0;

   wiringPiISR (encoder->pinA, INT_EDGE_FALLING, &myInterrupt)
   pinMode(encoder->pinB, _IOS_IMPUT);    
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
    incrementalEncoderList.push_back(IncrementalEncoder::IncrementalEncoder(7, 8)); // Encodeur droit
    incrementalEncoderList.push_back(IncrementalEncoder::IncrementalEncoder(2, 3)); // Encodeur Gauche

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
    
    /*
    pinMode(0, _IOS_OUTPUT) 

    // set Pin 17/0 generate an interrupt on high-to-low transitions
    // and attach myInterrupt() to the interrupt
    if (wiringPiISR(BUTTON_PIN, INT_EDGE_FALLING, &myInterrupt) < 0)
    {
        fprintf(stderr, "Unable to setup ISR: %s\n", strerror(errno));
        return 1;
    }

    // display counter value every second.
    while (1)
    {
        printf("%d\n", eventCounter);
        eventCounter = 0;
        delay(1000); // wait 1 second
    }
    return 0;
    */
}