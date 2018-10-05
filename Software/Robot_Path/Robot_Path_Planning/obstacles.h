#ifndef OBSTACLES_H
#define OBSTACLES_H

#include "pose2d.h"
#include "dimensions.h"

class Obstacles
{
public:
  Obstacles();

  Pose2D pose() const;
  void setPose(const Pose2D &pose);

  Dimensions dimension() const;
  void setDimension(const Dimensions &dimension);

private:
  Pose2D pose_;
  Dimensions dimension_;

};

#endif // OBSTACLES_H
