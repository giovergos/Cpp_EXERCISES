#ifndef CYLINDER_H
#define CYLINDER_H

#include "Sphere.h"

class Cylinder : public Sphere
{
  protected:  
    float L;
  public:
    Cylinder():Sphere() {L=0;}
    Cylinder(double a, double b, double c, double d, double e):Sphere(a, b, c, d) {L=e;}
    void SetL(double a);
    bool inCylinder(double a, double b, double c);
    double Diameter();
    double Area();
    double Volume();
};

#endif
