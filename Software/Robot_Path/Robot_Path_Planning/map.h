#ifndef MAP_H
#define MAP_H

#include <list>
#include <robot.h>

using namespace std;

class Map
{


public:
  Map(float width, float length);

  list<Robot> list_robot() const;
  void setList_robot(const list<Robot> &list_robot);

private:
  float width_;
  float length_;

  list<float> list_obstacles_;

  list<Robot> list_robot_;
};

#endif // MAP_H
