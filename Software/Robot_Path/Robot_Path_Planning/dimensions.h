#ifndef DIMENSIONS_H
#define DIMENSIONS_H


class Dimensions
{
public:
    Dimensions();

    float width() const;
    void setWidth(float width);

    float length() const;
    void setLength(float length);

    float height() const;
    void setHeight(float height);

private:
    float width_;
    float length_;
    float height_;
};

#endif // DIMENSIONS_H



