#include "Polygon.h"
#include <iostream>

void Polygon::SetValues(int width, int height) {
    mWidth = width;
    mHeight = height;
}

void Polygon::PrintArea() {
    std::cout << this->Area() << '\n';
}
