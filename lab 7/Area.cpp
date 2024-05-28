// Area.cpp
#include "Area.h"

namespace shapes {

float Area::calculateSquareArea(const Square& square) {
    return square.getSideLength() * square.getSideLength();
}

float Area::calculateTriangleArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

float Area::calculateCircleArea(const Circle& circle) {
    return 3.14159 * circle.getRadius() * circle.getRadius();
}

} // namespace shapes
