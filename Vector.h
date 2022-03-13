#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>

class Vector
{
  private:
    double x, y;
  public:
    Vector();
    Vector(double a, double b);
    double GetX();
    double GetY();
    void SetX(double a);
    void SetY(double a);
    double magnitude();
    double angle();
    double angleD();
    void multiply(double f);
    Vector add(Vector v);
    Vector clone();
};

#endif