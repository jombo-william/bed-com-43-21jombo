#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double Triangle(double base, double height);
double Rectangle(double length, double width);
double Square(double side);

int main() {
    char choice;

    do {
        // Display menu and prompt user for choice
        cout << "Select a shape you want to calculate the area by entering the correct number :\n"
             << "1. area of Triangle\n"
             << "2. area of Rectangle\n"
             << "3. area of Square\n"
             << "4. close the program \n"
             << "Enter a number that correspond to the area you want calculate between  (1, 2, 3, 4): ";
        // prompt the user to enter the number of his or her choice 
        cin >> choice;
// after entering the correct number the program will procced to process basing on the number chosen 
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
            // if the number chosen is four the program will exit or close it self 
        } else if (choice == '4') {
            cout << "Exiting program...\n";
        } else {
            // if the number entered is not in the range of one to four , will prompt the user to re-enter the number
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != '4');

    return 0;
}

// Function to calculate the area of a triangle
double Triangle(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double Rectangle(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double Square(double side) {
    return side * side;
}