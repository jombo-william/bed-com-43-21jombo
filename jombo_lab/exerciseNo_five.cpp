//calculatig the area of shapes , triagle , rectangle , and square,
#include <iostream>
#include <cmath>

using namespace std;


double Triangle(double base, double height);
double Rectangle(double length, double width);
double Square(double side);

int main() {
    char choice;

    do {
       
        cout << "Select a shape you want to calculate the area by entering the correct number :\n"
             << "1. area of Triangle\n"
             << "2. area of Rectangle\n"
             << "3. area of Square\n"
             << "4. close the program \n"
             << "Enter a number that correspond to the area you want calculate between  (1, 2, 3, 4): ";
       
        cin >> choice;

       // if the number entered is one  
        if (choice == '1') {
            double base, height;
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle: " << Triangle(base, height) << endl;
            //if the number entered is two 
        } else if (choice == '2') {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Area of the rectangle: " << Rectangle(length, width) << endl;
            //if the number entered is 3
        } else if (choice == '3') {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "Area of the square: " << Square(side) << endl;
           
        } else if (choice == '4') {
            cout << "Exiting program...\n";
        } else {
            
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != '4');

    return 0;
}


double Triangle(double base, double height) {
    return 0.5 * base * height;
}


double Rectangle(double length, double width) {
    return length * width;
}


double Square(double side) {
    return side * side;
}
