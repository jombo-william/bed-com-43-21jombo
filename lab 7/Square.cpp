// Square.cpp
#include "Square.h"

namespace shapes {

Square::Square() : sideLength(0) {}

Square::Square(float s) : sideLength(s) {}

Square::~Square() {}

void Square::setSideLength(float s) {
    sideLength = s;
}

float Square::getSideLength() const {
    return sideLength;
}

} // namespace shapes
