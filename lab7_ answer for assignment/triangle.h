// Triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();

        void setBase(double b);
        void setHeight(double h);
        double getBase() const;
        double getHeight() const;
    };
}

#endif // TRIANGLE_H
