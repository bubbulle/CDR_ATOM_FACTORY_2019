#include "map.h"

Map::Map(float width, float length, int width_resolution, int length_resolution):
  width_(width),
  length_(length),
  width_resolution_(width_resolution),
  length_resolution_(length_resolution)
{

}

list<Robot> Map::list_robot() const
{
    return list_robot_;
}

void Map::setList_robot(const list<Robot> &list_robot)
{
    list_robot_ = list_robot;
}

list<Obstacles> Map::list_obstacles() const
{
    return list_obstacles_;
}

void Map::setList_obstacles(const list<Obstacles> &list_obstacles)
{
    list_obstacles_ = list_obstacles;
}

int Map::width_resolution() const
{
  return width_resolution_;
}

void Map::setWidth_resolution(int width_resolution)
{
  width_resolution_ = width_resolution;
}

int Map::length_resolution() const
{
  return length_resolution_;
}

void Map::setLength_resolution(int length_resolution)
{
  length_resolution_ = length_resolution;
}
