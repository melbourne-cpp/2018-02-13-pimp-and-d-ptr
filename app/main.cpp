#include <iostream>

#include "square.h"

int main(int, char**)
{
    Square square(1,2);

    std::cout
        << square.getHeight() << "cm x "
        << square.getWidth() << "cm = "
        << square.getArea() << "cm^2"
        << std::endl;

    return 0;
}
