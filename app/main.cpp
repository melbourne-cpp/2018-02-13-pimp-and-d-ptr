#include <iostream>

#include "square.h"

int main(int, char**)
{
    Square * square = Square::getInstance();

    Square square(3,2);

    std::cout
        << square.getHeight() << "cm x "
        << square.getWidth() << "cm = "
        << square.getArea() << "cm^2"
        << std::endl;

    return 0;
}
