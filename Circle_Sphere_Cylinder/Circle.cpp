#include "Circle.h"
#include <cmath>

Circle::Circle()
{
  x=y=R=0;
}
Circle::Circle(double a, double b, double c)
{
  x=a;
  y=b;
  R=c;
}
void Circle::Setx(double a)
{
  x=a;
}
void Circle::Sety(double a)
{
  y=a;
}
void Circle::SetR(double a)
{
  R=a;
}
double Circle::Diameter()
{
  return 2*R;
}
bool Circle::inCircle(double a, double b)
{
  double c=sqrt((a-x)*(a-x)+(b-y)*(b-y));
  if(c<=R)
    return true;
  return false;
}
double Circle::Area()
{
  return M_PI*R*R;
}
double Circle::Perimeter()
{
  return 2*M_PI*R;
}
