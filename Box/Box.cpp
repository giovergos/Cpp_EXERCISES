#include "Box.h"

Box::Box()
{
  length=0;
  width=0;
  height=0;
}
Box::Box(float length, float width, float height)
{
  this->length=length;
  this->width=width;
  this->height=height;
}
float Box::getLength()
{
  return length;
}
float Box::getWidth()
{
  return width;
}
float Box::getHeight()
{
  return height;
}
Box Box::operator*(float x)
{
  Box temp(x*getLength(), x*getWidth(), x*getHeight());
  return temp;
}
Box Box::operator/(float x)
{
  Box temp(getLength()/x, getWidth()/x, getHeight()/x);
  return temp;
}
Box Box::operator+(float x)
{
  Box temp(x+getLength(), x+getWidth(), x+getHeight());
  return temp;
}
Box Box::operator-(float x)
{
  Box temp(getLength()-x, getWidth()-x, getHeight()-x);
  return temp;
}
Box Box::operator+(Box x)
{
  Box temp(this->getLength()+x.getLength(), this->getWidth()+x.getWidth(), this->getHeight()+x.getHeight());
  return temp;
}
Box Box::operator-(Box x)
{
  Box temp(fabs(this->getLength()-x.getLength()), fabs(this->getWidth()-x.getWidth()), fabs(this->getHeight()-x.getHeight()));
  return temp;
}
Box Box::operator=(Box x)
{
  length=x.length;
  width=x.width;
  height=x.height;
  return *this;
}
bool Box::operator==(Box x)
{
  if(this->getLength()==x.getLength() && this->getWidth()==x.getWidth() && this->getHeight()==getHeight())
    return true;
  return false;
}
bool Box::operator!=(Box x)
{
  if(this->getLength()!=x.getLength() || this->getWidth()!=x.getWidth() || this->getHeight()!=getHeight())
    return true;
  return false;
}
Box Box::operator++()
{
  length=length+1;
  width=width+1;
  height=height+1;
  return *this;
}
Box Box::operator++(int x)
{
  Box y=*this;
  length=length+1;
  width=width+1;
  height=height+1;
  return y;
}
Box Box::operator--()
{
  length=length-1;
  width=width-1;
  height=height-1;
  return *this;
}
Box Box::operator--(int x)
{
  Box y=*this;
  length=length-1;
  width=width-1;
  height=height-1;
  return y;
}
void Box::operator*=(int x)
{
  length=length*x;
  width=width*x;
  height=height*x;
}
void Box::operator/=(int x)
{
  length=length/(1.0*x);
  width=width/(1.0*x);
  height=height/(1.0*x);
}
void Box::operator+=(int x)
{
  length=length+x;
  width=width+x;
  height=height+x;
}
void Box::operator-=(int x)
{
  length=length-x;
  width=width-x;
  height=height-x;
}
ostream &operator<<(ostream &os, Box x)
{
  os<<"length: "<<x.getLength()<<", width: "<<x.getWidth()<<", height: "<<x.getHeight();
  return os;
}