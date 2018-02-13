#ifndef __CPP_MEETUP_SQUARE_H__
#define __CPP_MEETUP_SQUARE_H__

template<...>
class SquareInt {

public:
    Square0(SquareInt * imple, const int height, const int width);
    virtual int getArea() const = 0;
    virtual int getHeight() const = 0;
    virtual int getWidth() const = 0;

};

class SquareInt<Sper> spersqre;
class SquareInt<Square1> square1;

class SquareSuper : public Square0 {
}

class Square1 : public Square0 {
private:
    int area;

public:
    Square(const int height, const int width) : Square0(height, width) { }
    virtual int getArea() const { return 1; }
    virtual int getHeight() const { return 2; }
    virtual int getWidth() const { return 3; }
};

#endif
