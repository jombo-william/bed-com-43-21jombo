// Circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle();
        Circle(double r);
        ~Circle();

        void setRadius(double r);
        double getRadius() const;
    };
}

#endif // CIRCLE_H
