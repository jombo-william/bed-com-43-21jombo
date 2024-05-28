// main.cpp
#include <iostream>
#include "Square.h"
#include "Triagle.h"
#include "Cirle.h"
#include "Area.h"

using namespace shapes;
using namespace std;

void calculateSquareArea() {
    float sideLength;
    cout << "Enter the side length of the square: ";
    cin >> sideLength;
    Square square(sideLength);
    cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
}

void calculateTriangleArea() {
    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    Triangle triangle(base, height);
    cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
}

void calculateCircleArea() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
}

int main() {
    int choice;

    while (true) {
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateSquareArea();
                break;
            case 2:
                calculateTriangleArea();
                break;
            case 3:
                calculateCircleArea();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
