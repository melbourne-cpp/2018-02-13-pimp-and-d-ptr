#ifndef __CPP_MEETUP_SQUAREIMPL_H__
#define __CPP_MEETUP_SQUAREIMPL_H__

class SquarePrivate {

friend Square;

private:
    int height, width;

public:
    SquarePrivate(const int height, const int width);
    int getArea() const;
};

#endif
