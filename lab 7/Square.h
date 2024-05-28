// Square.h
#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {

class Square {
private:
    float sideLength;

public:
    Square();
    Square(float s);
    ~Square();

    void setSideLength(float s);
    float getSideLength() const;
};

} // namespace shapes

#endif // SQUARE_H
