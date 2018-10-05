#include "map.h"

Map::Map(float width, float length):
  width_(width),
  length_(length)
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

float Map::width_resolution() const
{
  return width_resolution_;
}

void Map::setWidth_resolution(float width_resolution)
{
  width_resolution_ = width_resolution;
}

float Map::length_resolution() const
{
  return length_resolution_;
}

void Map::setLength_resolution(float length_resolution)
{
  length_resolution_ = length_resolution;
}
