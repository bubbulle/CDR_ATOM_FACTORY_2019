#ifndef Sonar_h
#define Sonar_h
#endif

#include <stdint.h>

class Sonar
{
  public:
    Sonar(int pintrigger_, int pinecho_);
    double distance(bool *error);
    const static float MAX_DISTANCE;


  private:
    
    const static float DIST_SCALE;
    const static float TRAVEL_TIME_MAX;

    int32_t trigger_;
    int32_t echo_;
};
    
    
