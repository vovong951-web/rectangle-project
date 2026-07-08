#include "Rectangle.h"
#include "utils.h"

int main() {
    Rectangle rects[9] = {
        Rectangle(1,2), Rectangle(3,4), Rectangle(5,6),
        Rectangle(7,8), Rectangle(9,10), Rectangle(2,5),
        Rectangle(4,7), Rectangle(6,3), Rectangle(8,1)
    };

    for (int i = 0; i < 9; i++)
        printRectangle(i + 1, rects[i]);

    return 0;
}
