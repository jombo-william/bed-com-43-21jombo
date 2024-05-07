// Rectangle.cpp

#include "Rectangle.h"

Rectangle::Rectangle() : length(0), width(0) {}
Rectangle::Rectangle(float len, float wid) : length(len),width(wid){}

Rectangle::~Rectangle() {
    // Destructor does nothing for now
}

void Rectangle::setLength(float len) {
    length = len;
}

void Rectangle::setWidth(float wid) {
    width = wid;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
