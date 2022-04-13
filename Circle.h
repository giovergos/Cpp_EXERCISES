#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
  protected:  
    double x, y, R;
  public:
    Circle();
    Circle(double a, double b, double c);
    void Setx(double a);
    void Sety(double a);
    void SetR(double a);
    virtual double Diameter();
    bool inCircle(double a, double b);
    virtual double Area();
    double Perimeter();
};

#endif