#include "path_finding.h"

Path_Finding::Path_Finding(float start_pose, float target_pose) :
  start_pose_(start_pose),
  target_pose_(target_pose)
{
}

float Path_Finding::target_pose() const
{
  return target_pose_;
}

void Path_Finding::setTarget_pose(float target_pose)
{
  target_pose_ = target_pose;
}

float Path_Finding::start_pose() const
{
  return start_pose_;
}

void Path_Finding::setStart_pose(float start_pose)
{
  start_pose_ = start_pose;
}
