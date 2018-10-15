#ifndef OBJET_H
#define OBJET_H

#include "dimensions.h"
#include "pose2d.h"

class Objet
{
public:
    Objet(Pose2D pose, Dimensions dimension);

    Dimensions dimension() const;
    void setDimension(const Dimensions &dimension);

    Pose2D pose() const;
    void setPose(const Pose2D &pose);

private:
    Dimensions dimension_;
    Pose2D pose_;
};

#endif // OBJET_H
