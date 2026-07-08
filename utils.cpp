#include "utils.h"
#include <iostream>

void printRectangle(int index, Rectangle& r) {
    std::cout << "Rectangle " << index << ": "
              << "Chu vi = " << r.perimeter()
              << ", Dien tich = " << r.area() << std::endl;
}
