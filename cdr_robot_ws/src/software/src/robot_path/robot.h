#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
  typedef struct{
    float x_;
    float y_;
    float theta_;
  } Pose2D;

  typedef struct{
    float width_;
    float length_;
    float height_;
  } Dimensions;

public:
  Robot();

private:
  Pose2D pose_;
  Dimensions dimension_;
};

#endif // ROBOT_H
