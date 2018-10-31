#ifndef Sonar_h
#define Sonar_h
#endif

#include <stdint.h>

class Sonar
{
  public:
    Sonar(int pintrigger_, int pinecho_);

  private:
    
    const static float MAX_DISTANCE;
    const static float DIST_SCALE;
    const static float TRAVEL_TIME_MAX;

    double distance(bool *error);
    int32_t trigger_;
    int32_t echo_;
};
    
    
