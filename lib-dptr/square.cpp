#include "square.h"
#include "squareprivate.h"

Square::Square(const int height, const int width)
: d_ptr(this, new SquarePrivate(height, width))
{

}

int Square::getArea() const
{
    return d_ptr->area;
}

int Square::getHeight() const
{
    return d_ptr->height;
}

int Square::getWidth() const
{
    return d_ptr->width;
}

SquarePrivate::SquarePrivate(Square *q, const int height, const int width)
: q_ptr(q), height(height), width(width)
{
    area = height * width;
}

SquarePrivate::foo()
{
    q_ptr->dosome();
}
