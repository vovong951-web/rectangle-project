#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

double Rectangle::area() {
    return width * height;
}
