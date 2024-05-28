#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double areaofTriangle(double base, double height);
double areaofRectangle(double length, double width);
double areaofSquare(double side);

int main() {
    char choice;

    do {
        // Display menu and prompt user for choice
        cout << "choose the area to be calculated :\n"
             << "1.Area of  Triangle\n"
             << "2.Area of  Rectangle\n"
             << "3. area of Square\n"
             << "4. close the program \n"
             << "Enter an number tha correspond to the shape you want to calculate betweeen  (1, 2, 3, 4): ";
        cin >> choice;

        // Process user's choice
        switch (choice) {
            case '1': {
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            }
            case '2': {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            }
            case '3': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
            }
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }
    } while (choice != '4');

    return 0;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}