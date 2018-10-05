#ifndef ROBOT_H
#define ROBOT_H

#include "pose2d.h"
#include "dimensions.h"

class Robot
{

public:
  Robot();

  Pose2D pose() const;
  void setPose(const Pose2D &pose);

  Dimensions dimension() const;
  void setDimension(const Dimensions &dimension);

private:
  Pose2D pose_;
  Dimensions dimension_;
};

#endif // ROBOT_H
