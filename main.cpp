#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rects[9] = {
        Rectangle(1, 2), Rectangle(3, 4), Rectangle(5, 6),
        Rectangle(7, 8), Rectangle(9, 10), Rectangle(2, 5),
        Rectangle(4, 7), Rectangle(6, 3), Rectangle(8, 1)
    };

    for (int i = 0; i < 9; i++) {
        std::cout << "Rectangle " << i+1 << ": "
                  << "Chu vi = " << rects[i].perimeter()
                  << ", Dien tich = " << rects[i].area() << std::endl;
    }
    return 0;
}
