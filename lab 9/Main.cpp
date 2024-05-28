#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Daughter.h"
#include "Son.h"

using namespace std;

int main() {
    // Part 1: Rectangle and Triangle
    Rectangle rect;
    Triangle trgl;

    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);

    pPoly1->PrintArea();
    pPoly2->PrintArea();

    // Part 2: Daughter and Son
    Daughter theDaughter(1);
    Son theSon(2);

    // Part 3: Dynamic memory allocation and polymorphism
    Polygon* pPoly3 = new Rectangle();
    Polygon* pPoly4 = new Triangle();

    pPoly3->SetValues(4, 5);
    pPoly4->SetValues(4, 5);

    pPoly3->PrintArea();
    pPoly4->PrintArea();

    delete pPoly3;
    delete pPoly4;

    return 0;
}
