#include "square.h"

Square::Square(const int height, const int width) : height(height), width(width)
{

}

int Square::getArea() const
{
    return height * width;
}

int Square::getHeight() const
{
    return height;
}

int Square::getWidth() const
{
    return width;
}
