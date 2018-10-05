#include "pose2d.h"

Pose2D::Pose2D(float x, float y, float theta) :
  x_(x),
  y_(y),
  theta_(theta)
{
}

float Pose2D::x() const
{
    return x_;
}

void Pose2D::setX(float x)
{
    x_ = x;
}

float Pose2D::y() const
{
    return y_;
}

void Pose2D::setY(float y)
{
    y_ = y;
}

float Pose2D::theta() const
{
    return theta_;
}

void Pose2D::setTheta(float theta)
{
    theta_ = theta;
}

Pose2D Pose2D::getPose2D() const
{
  return *this;
}

void Pose2D::setPose2D(float x, float y, float theta)
{
  x_ = x;
  y_ = y;
  theta_ = theta;
}

