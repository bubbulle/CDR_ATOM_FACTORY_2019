#ifndef MAP_H
#define MAP_H

#include <list>

#include <robot.h>
#include <obstacles.h>

using namespace std;

class Map
{


public:
  Map(float width, float length);

  list<Robot> list_robot() const;
  void setList_robot(const list<Robot> &list_robot);

  list<Obstacles> list_obstacles() const;
  void setList_obstacles(const list<Obstacles> &list_obstacles);

  float width_resolution() const;
  void setWidth_resolution(float width_resolution);

  float length_resolution() const;
  void setLength_resolution(float length_resolution);

private:
  float width_;
  float length_;
  float width_resolution_;
  float length_resolution_;

  list<Obstacles> list_obstacles_;

  list<Robot> list_robot_;
};

#endif // MAP_H
