#include "dimensions.h"

<<<<<<< HEAD
Dimensions::Dimensions(float width, float length, float height):
    width_(width),
    length_(length),
    height_(height)
=======
Dimensions::Dimensions(float width, float length, float height) :
  width_(width),
  length_(length),
  height_(height)
>>>>>>> dev
{
}

float Dimensions::width() const
{
    return width_;
}

void Dimensions::setWidth(float width)
{
    width_ = width;
}

float Dimensions::length() const
{
    return length_;
}

void Dimensions::setLength(float length)
{
    length_ = length;
}

float Dimensions::height() const
{
    return height_;
}

void Dimensions::setHeight(float height)
{
    height_ = height;
}

