#ifndef __CPP_MEETUP_SQUARE_H__
#define __CPP_MEETUP_SQUARE_H__

class Square {

private:
    int height, width;

public:
    Square(const int height, const int width);
    int getArea() const;
    int getHeight() const;
    int getWidth() const;

};

#endif
