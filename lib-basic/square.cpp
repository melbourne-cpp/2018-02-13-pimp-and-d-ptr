#include "square.h"

Square::Square(const int height, const int width) : height(height), width(width)
{
    area = height * width;
}

int Square::getArea() const
{
    //return height * width;
    return area;
}

int Square::getHeight() const
{
    return height;
}

int Square::getWidth() const
{
    return width;
}
