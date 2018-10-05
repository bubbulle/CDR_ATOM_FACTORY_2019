#ifndef MAP_H
#define MAP_H

#include <list>

#include <robot.h>
#include <obstacles.h>

using namespace std;

class Map
{


public:
  Map(float width, float length, int width_resolution, int length_resolution);

  list<Robot> list_robot() const;
  void setList_robot(const list<Robot> &list_robot);

  list<Obstacles> list_obstacles() const;
  void setList_obstacles(const list<Obstacles> &list_obstacles);

  int width_resolution() const;
  void setWidth_resolution(int width_resolution);

  int length_resolution() const;
  void setLength_resolution(int length_resolution);

private:
  float width_;
  float length_;
  int width_resolution_;
  int length_resolution_;

  list<Obstacles> list_obstacles_;

  list<Robot> list_robot_;
};

#endif // MAP_H
