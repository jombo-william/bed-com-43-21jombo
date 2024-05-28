// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {

class Triangle {
private:
    float base;
    float height;

public:
    Triangle();
    Triangle(float b, float h);
    ~Triangle();

    void setBase(float b);
    void setHeight(float h);
    float getBase() const;
    float getHeight() const;
};

} // namespace shapes

#endif // TRIANGLE_H
