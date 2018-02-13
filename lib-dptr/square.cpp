#include "square.h"
#include "squareprivate.h"

Square::Square(const int height, const int width) : d_ptr(new SquarePrivate(height, width))
{

}

int Square::getArea() const
{
    return d_ptr->getArea();
}

int Square::getHeight() const
{
    return d_ptr->height;
}

int Square::getWidth() const
{
    return d_ptr->width;
}

SquarePrivate::SquarePrivate(const int height, const int width) : height(height), width(width)
{
    //area = height * width;
}

int SquarePrivate::getArea() const
{
    return height * width;
}
