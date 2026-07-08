#pragma once

/**
 * @class Rectangle
 * @brief Lớp đại diện cho hình chữ nhật.
 */
class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h);
    double perimeter();
    double area();
};