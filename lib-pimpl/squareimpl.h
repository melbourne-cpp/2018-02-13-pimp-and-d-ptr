#ifndef __CPP_MEETUP_SQUAREIMPL_H__
#define __CPP_MEETUP_SQUAREIMPL_H__

class SquareImpl {

private:
    int height, width;

public:
    SquareImpl(const int height, const int width);
    int getArea() const;
    int getHeight() const;
    int getWidth() const;

};

#endif
