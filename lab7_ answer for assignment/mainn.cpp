// main.cpp

#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
cout<< " enter the length of the second rectangle ";
cin>> length;
cout<< " enter the widith of the second rectangle ";
cin>> width;
Rectangle rect2( length, width);
cout<<" area of the second rectangle; " << rect2.calculateArea()<<endl;
    return 0;
}
