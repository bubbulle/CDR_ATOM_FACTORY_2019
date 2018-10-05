#include "robot.h"

Robot::Robot()
{

}

Pose2D Robot::pose() const
{
    return pose_;
}

void Robot::setPose(const Pose2D &pose)
{
    pose_ = pose;
}

Dimensions Robot::dimension() const
{
    return dimension_;
}

void Robot::setDimension(const Dimensions &dimension)
{
    dimension_ = dimension;
}
