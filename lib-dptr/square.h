#ifndef __CPP_MEETUP_SQUARE_H__
#define __CPP_MEETUP_SQUARE_H__

class SquarePrivate;

class Square {

private:
    SquarePrivate *d_ptr;

public:
    Square(const int height, const int width);
    int getArea() const;
    int getHeight() const;
    int getWidth() const;

};

#endif
