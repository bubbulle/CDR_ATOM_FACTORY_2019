#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "IncrementalEncoder.h"

IncrementalEncoder::IncrementalEncoder(int pinADroit, int pinAGauche)
{
    this->pinADroit = pinADroit;
    this->pinAGauche = pinAGauche;
    init();
}

void WheelEncoder::incrementGauche()
{
    ++encoder->pos;
}

void WheelEncoder::decrementGauche()
{
    --encoder->pos;
}

void WheelEncoder::init()
{
    
    //Initialisation des encodeurs
    if (pinADroit == 2)
        encoder->pinSignalA = 0;
    if (pinADroit == 3)
        encoder->pinSignalA = 1;

    encoder->pinSignalB = pinBGauche;
    encoder->pinSignalB = pinBDroit;

    encoder->pos = 0;
    encoderDroit->pos = 0;
}