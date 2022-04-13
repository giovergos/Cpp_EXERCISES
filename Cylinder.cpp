#include "Cylinder.h"
#include <cmath>

void Cylinder::SetL(double a)
{
  L=a;
}
double Cylinder::Diameter()
{
  return 2*R;
}
bool Cylinder::inCylinder(double a, double b, double c)
{
  double d=sqrt((a-x)*(a-x)+(b-y)*(b-y));
  if(d<=R && c>=z-(L/2.0) && c<=z+(L/2.0))
    return true;
  return false;
}
double Cylinder::Area()
{
  return 2*M_PI*R*(R+L);
}
double Cylinder::Volume()
{
  return L*M_PI*R*R;
}