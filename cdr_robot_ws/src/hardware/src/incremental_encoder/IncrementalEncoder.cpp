#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "IncrementalEncoder.h"
#include "std_msgs/Int32.h"
#include <ros/ros.h>


IncrementalEncoder::IncrementalEncoder(int pinADroit, int pinBGauche)
{
    this->pinA = pinADroit;
    this->pinB = pinBGauche;

    init();
}

void IncrementalEncoder::increment()
{
    ++encoder->pos;
}

void IncrementalEncoder::decrement()
{
    --encoder->pos;
}

void IncrementalEncoder::init()

  /*
    Attention
    Les pins 2 & 3 du GPIO sont utilisés pour les interruptions. 
    Les pins correspondent à des numéros d'interruptions qui sont respectivement 0 & 1.
   */
{
    //Initialisation des encodeurs
    if (pinB == 2)
        encoder->pinSignalA = 0;
    if (pinB == 3)
        encoder->pinSignalA = 1;

    encoder->pinSignalB = pinB;

    encoder->pos = 0;
}

// main
int main(void) {
    ros::NodeHandle nh;
    std_msgs::Int32 str_msg;
    ros::Publisher chatter("/Encoder/", &str_msg); // Test uniquement sur l'encodeur gauche  

    
    wiringPiSetup () ;
    pinMode(0,_IOS_OUTPUT)
  if (wiringPiSetup () < 0) {
      fprintf (stderr, "Unable to setup wiringPi: %s\n", strerror (errno));
      return 1;
  }

  // set Pin 17/0 generate an interrupt on high-to-low transitions
  // and attach myInterrupt() to the interrupt
  if ( wiringPiISR (BUTTON_PIN, INT_EDGE_FALLING, &myInterrupt) < 0 ) {
      fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno));
      return 1;
  }

  // display counter value every second.
  while ( 1 ) {
    printf( "%d\n", eventCounter );
    eventCounter = 0;
    delay( 1000 ); // wait 1 second
  }
  return 0;
}