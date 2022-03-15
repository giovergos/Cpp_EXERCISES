#include "Triangle.h"

Triangle::Triangle()
{
  xa=ya=xb=yb=xc=yc=0;
}
Triangle::Triangle(float ax, float ay, float bx, float by, float cx, float cy)
{
  xa=ax;
  ya=ay;
  xb=bx;
  yb=by;
  xc=cx;
  yc=cy;
}
void Triangle::SetXA(float a)
{
  xa=a;
}
void Triangle::SetYA(float a)
{
  ya=a;
}
void Triangle::SetXB(float a)
{
  xb=a;
}
void Triangle::SetYB(float a)
{
  yb=a;
}
void Triangle::SetXC(float a)
{
  xc=a;
}
void Triangle::SetYC(float a)
{
  yc=a;
}
double Triangle::getAB()
{
  return sqrt(pow(xa-xb, 2)+pow(ya-yb, 2));
}
double Triangle::getAC()
{
  return sqrt(pow(xa-xc, 2)+pow(ya-yc, 2));
}
double Triangle::getBC()
{
  return sqrt(pow(xb-xc, 2)+pow(yb-yc, 2));
}
double Triangle::getA()
{
  return acos((pow(getAC(),2)+pow(getAB(), 2)-pow(getBC(), 2))/(2*getAC()*getAB()));
}
double Triangle::getB()
{
  return acos((pow(getAB(),2)+pow(getBC(), 2)-pow(getAC(), 2))/(2*getAB()*getBC()));
}
double Triangle::getC()
{
  return acos((pow(getBC(),2)+pow(getAC(), 2)-pow(getAB(), 2))/(2*getBC()*getAC()));
}
bool Triangle::isIsopleurous()
{
  if(fabs(getAB()-getAC())<0.0001 && fabs(getAB()-getBC())<0.0001)
    return true;
  return false;
}
bool Triangle::isIsosceles()
{
  if(fabs(getAB()-getAC())<0.0001 || fabs(getAB()-getBC())<0.0001 || fabs(getAC()-getBC())<0.0001)
    return true;
  return false;
}
bool Triangle::isScalino()
{
  if(getAB()!=getAC() && getAB()!=getBC() && getAC()!=getBC()) 
    return true;
  return false;
}
bool Triangle::isOrthogonio()
{
  if(((getA()*(180.0/M_PI)-90)<0.0001 && getA()*(180.0/M_PI)-90>=0) || ((getB()*(180.0/M_PI)-90)<0.0001 && getB()*(180.0/M_PI)-90>=0) || ((getC()*(180.0/M_PI)-90)<0.0001 && getC()*(180.0/M_PI)-90>=0))
    return true;
  return false;
}
bool Triangle::isOxygonio()
{
  if(getA()*(180.0/M_PI)<90 && getB()*(180.0/M_PI)<90 && getC()*(180.0/M_PI)<90)
    return true;
  return false;
}
bool Triangle::isAmvligonio()
{
  if(getA()*(180.0/M_PI)>90 || getB()*(180.0/M_PI)>90 || getC()*(180.0/M_PI)>90)
    return true;
  return false;
}
double Triangle::getHeight()
{
  return sin(getA())*getAC();
}
double Triangle::getBase()
{
  return getAB();
}
double Triangle::getArea()
{
  return (getBase()*getHeight())/2;
}