#include <iostream>
#include <cmath>

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square() : sideLength(0) {}
        Square(double side) : sideLength(side) {}
        ~Square() {}

        void setSideLength(double side) {
            sideLength = side;
        }

        double getSideLength() const {
            return sideLength;
        }
    };

    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle() : base(0), height(0) {}
        Triangle(double b, double h) : base(b), height(h) {}
        ~Triangle() {}

        void setBase(double b) {
            base = b;
        }

        void setHeight(double h) {
            height = h;
        }

        double getBase() const {
            return base;
        }

        double getHeight() const {
            return height;
        }
    };

    class Circle {
    private:
        double radius;

    public:
        Circle() : radius(0) {}
        Circle(double r) : radius(r) {}
        ~Circle() {}

        void setRadius(double r) {
            radius = r;
        }

        double getRadius() const {
            return radius;
        }
    };

    class Area {
    public:
        static double calculateArea(const Square& square) {
            return square.getSideLength() * square.getSideLength();
        }

        static double calculateArea(const Triangle& triangle) {
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }

        static double calculateArea(const Circle& circle) {
            return M_PI * circle.getRadius() * circle.getRadius();
        }
    };
}

using namespace std;
using namespace shapes;

int main() {
    char choice;
    do {
        cout << "Select a shape to calculate its area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateArea(square) << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
