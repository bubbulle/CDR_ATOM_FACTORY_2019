#ifndef POSE2D_H
#define POSE2D_H


class Pose2D
{
public:
    Pose2D();

    float x() const;
    void setX(float x);

    float y() const;
    void setY(float y);

    float theta() const;
    void setTheta(float theta);

private:
    float x_;
    float y_;
    float theta_;
};

#endif // POSE2D_H

