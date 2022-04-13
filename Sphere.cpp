#include "Sphere.h"
#include <cmath>

void Sphere::Setz(double a)
{
  z=a;
}
double Sphere::Diameter()
{
  return 2*R;
}
bool Sphere::inSphere(double a, double b, double c)
{
  double d=sqrt((a-x)*(a-x)+(b-y)*(b-y)+(c-z)*(c-z));
  if(d<=R)
    return true;
  return false;
}
double Sphere::Area()
{
  return 4*M_PI*R*R;
}
double Sphere::Volume()
{
  return (4.0/3.0)*M_PI*R*R*R;
}