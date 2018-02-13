#ifndef __CPP_MEETUP_SQUARE_H__
#define __CPP_MEETUP_SQUARE_H__

class SquarePrivate;

class Square {

private:
    SquarePrivate *d_ptr;

protected:
    SquarePrivate * d_func();
    const SquarePrivate * d_func() const;

public:
    Square(const int height, const int width);
    int getArea() const;
    int getHeight() const;
    int getWidth() const;

};

class ColoredSquare : public Square {

public:
    ColoredSquare::ColoredSquare(...);
    int hello() {
        ColoredSquarePrivate * d = static_cast<ColoredSquarePrivate *>d_func();
        d->getsomethingcolored();
    }

}

#endif
