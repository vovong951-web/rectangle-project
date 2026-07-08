#ifndef RECTANGLE_H
#define RECTANGLE_H

/**
 * @file Rectangle.h
 * @brief Định nghĩa lớp Rectangle đại diện cho hình chữ nhật.
 */

/**
 * @class Rectangle
 * @brief Lớp đại diện cho hình chữ nhật với chiều rộng và chiều cao.
 */
class Rectangle {
private:
    double width;   ///< Chiều rộng
    double height;  ///< Chiều cao

public:
    /**
     * @brief Khởi tạo hình chữ nhật.
     * @param w Chiều rộng (phải > 0)
     * @param h Chiều cao (phải > 0)
     */
    Rectangle(double w, double h);

    /**
     * @brief Tính chu vi.
     * @return 2 * (width + height)
     */
    double perimeter();

    /**
     * @brief Tính diện tích.
     * @return width * height
     */
    double area();
};

#endif
