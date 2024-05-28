// main.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // First instance with default constructor
    Rectangle rect1;
    float length, width;

    cout << "Enter length for rectangle 1: ";
    cin >> length;
    rect1.setLength(length);

    cout << "Enter width for rectangle 1: ";
    cin >> width;
    rect1.setWidth(width);

    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // Second instance with overloaded constructor
    cout << "Enter length for rectangle 2: ";
    cin >> length;

    cout << "Enter width for rectangle 2: ";
    cin >> width;

    Rectangle rect2(length, width);
    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}
