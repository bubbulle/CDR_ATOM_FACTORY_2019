#ifndef MAP_H
#define MAP_H

#include <list>

using namespace std;

class Map
{


public:
  Map();

private:
  float width_;
  float length_;

  list<float> list_;
};

#endif // MAP_H
