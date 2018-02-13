#ifndef __CPP_MEETUP_SQUAREIMPL_H__
#define __CPP_MEETUP_SQUAREIMPL_H__

class SquarePrivate {

friend Square;

private:
    Square *q_ptr;

    int height, width;
    int area;

public:
    SquarePrivate(Square *q, const int height, const int width);
};

class ColoredSquarePrivate : public SquarePrivate
{
private:
    Square *q_ptr;

public:
    SquarePrivate(ColoredSquare q, ...);
}

#endif
