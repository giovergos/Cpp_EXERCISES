#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>

class Triangle
{
  private:
    float xa, ya, xb, yb, xc, yc;
  public:
    Triangle();
    Triangle(float ax, float ay, float bx, float by, float cx, float cy);
    void SetXA(float a);
    void SetYA(float a);
    void SetXB(float a);
    void SetYB(float a);
    void SetXC(float a);
    void SetYC(float a);
    double getAB();
    double getAC();
    double getBC();
    double getA();
    double getB();
    double getC();
    bool isIsopleurous();
    bool isIsosceles();
    bool isScalino();
    bool isOrthogonio();
    bool isOxygonio();
    bool isAmvligonio();
    double getHeight();
    double getBase();
    double getArea();
};

#endif
