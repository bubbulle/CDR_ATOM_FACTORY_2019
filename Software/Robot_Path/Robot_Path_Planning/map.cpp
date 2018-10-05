#include "map.h"

Map::Map(float width, float length)
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
