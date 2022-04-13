#ifndef SPHERE_H
#define SPHERE_H

#include "Circle.h"

class Sphere : public Circle
{
  protected:  
    float z;
  public:
    Sphere():Circle() {z=0;}
    Sphere(double a, double b, double c, double d):Circle(a, b, d) {z=c;}
    void Setz(double a);
    double Diameter();
    bool inSphere(double a, double b, double c);
    double Area();
    double Volume();
};

#endif