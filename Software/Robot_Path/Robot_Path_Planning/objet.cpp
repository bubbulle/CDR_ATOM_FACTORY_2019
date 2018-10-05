#include "objet.h"

Objet::Objet(Pose2D pose, Dimensions dimension):
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

