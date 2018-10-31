#ifndef Sonar_h
#define Sonar_h
#endif



class Sonar
{
  public:
    Sonar(int pinAGauche, int pinBGauche);

  private:
    // Maximum distance reported. Values over this distance
    // report MAX_DISTANCE. TODO make this a property.

    const static float MAX_DISTANCE = 30;
    const static float DIST_SCALE = 58.0;
    const static float TRAVEL_TIME_MAX = MAX_DISTANCE * DIST_SCALE;

    double distance(bool *error);
    int trigger_;
    int echo_;
};
    
    
