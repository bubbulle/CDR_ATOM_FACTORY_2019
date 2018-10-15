#ifndef PATH_FINDING_H
#define PATH_FINDING_H


class Path_Finding
{
public:
  Path_Finding(float start_pose, float target_pose);

  float target_pose() const;
  void setTarget_pose(float target_pose);

  float start_pose() const;
  void setStart_pose(float start_pose);

private:
  float start_pose_;
  float target_pose_;
};

#endif // PATH_FINDING_H
