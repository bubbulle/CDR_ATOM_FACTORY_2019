#include "objet.h"

Objet::Objet(Dimensions dimension,Pose2D pose):
    dimension_(dimension),
    pose_(pose)
{

}

Dimensions Objet::dimension() const
{
    return dimension_;
}

void Objet::setDimension(const Dimensions &dimension)
{
    dimension_ = dimension;
}

Pose2D Objet::pose() const
{
    return pose_;
}

void Objet::setPose(const Pose2D &pose)
{
    pose_ = pose;
}

