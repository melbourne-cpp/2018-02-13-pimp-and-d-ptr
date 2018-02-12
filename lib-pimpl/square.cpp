#include "square.h"
#include "squareimpl.h"

Square::Square(const int height, const int width)
{
    pimpl = new SquareImpl(height, width);
}

int Square::getArea() const
{
    return pimpl->getArea();
}

int Square::getHeight() const
{
    return pimpl->getHeight();
}

int Square::getWidth() const
{
    return pimpl->getWidth();
}

SquareImpl::SquareImpl(const int height, const int width) : height(height), width(width)
{

}

int SquareImpl::getArea() const
{
    return height * width;
}

int SquareImpl::getHeight() const
{
    return height;
}

int SquareImpl::getWidth() const
{
    return width;
}
