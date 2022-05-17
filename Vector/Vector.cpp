#include "Vector.h"

Vector::Vector()
{
  x=y=0;
}

Vector::Vector(double a, double b)
{
  x=a;
  y=b;
}

double Vector::GetX()
{
  return x;
}

double Vector::GetY()
{
  return y;
}

void Vector::SetX(double a)
{
  x=a;
}

void Vector::SetY(double a)
{
  y=a;
}

double Vector::magnitude()
{
  return sqrt(x*x+y*y);
}

double Vector::angle()
{
  return atan(y/x);
}

double Vector::angleD()
{
  return atan(y/x)*(180.0/M_PI);
}

void Vector::multiply(double f)
{
  x*=f;
  y*=f;
}

Vector Vector::add(Vector v)
{
  Vector n(x+v.GetX(), y+v.GetY());
  return n;
}

Vector Vector::clone()
{
  Vector n(x, y);
  return n;
}
