#pragma once

class Polygon {
protected:
    int mWidth;
    int mHeight;
public:
    void SetValues(int width, int height);
    virtual int Area() = 0;  // Abstract class with pure virtual function
    void PrintArea();
};
