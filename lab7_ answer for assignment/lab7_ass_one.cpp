#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() : length(0), width(0) {}
    ~Rectangle() {}

    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    float calculateArea() const {
        return length * width;
    }
};

int main() {
    float length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);

    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
