#include "obstacles.h"

Obstacles::Obstacles(Pose2D pose, Dimensions dim):
  pose_(pose),
  dimension_(dim)
{
}

Pose2D Obstacles::pose() const
{
    return pose_;
}

void Obstacles::setPose(const Pose2D &pose)
{
    pose_ = pose;
}

Dimensions Obstacles::dimension() const
{
    return dimension_;
}

void Obstacles::setDimension(const Dimensions &dimension)
{
    dimension_ = dimension;
}
