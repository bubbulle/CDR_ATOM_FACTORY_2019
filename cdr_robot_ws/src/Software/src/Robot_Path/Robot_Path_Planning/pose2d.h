#ifndef POSE2D_H
#define POSE2D_H


class Pose2D
{
public:
    Pose2D(float x, float y, float theta);

    float x() const;
    void setX(float x);

    float y() const;
    void setY(float y);

    float theta() const;
    void setTheta(float theta);

    Pose2D getPose2D() const;
    void setPose2D(float x, float y, float theta);

private:
    float x_;
    float y_;
    float theta_;
};

#endif // POSE2D_H

