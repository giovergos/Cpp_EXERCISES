#ifndef BOX_H
#define BOX_H

#include <iostream>
#include <math.h>

using namespace std;

class Box
{
  protected:
    float length, width, height;
  public:
    Box();
    Box(float length, float width, float height);
    float getLength();
    float getWidth();
    float getHeight();
    Box operator*(float x);
    Box operator/(float x);
    Box operator+(float x);
    Box operator-(float x);
    Box operator+(Box x);
    Box operator-(Box x);
    Box operator=(Box x);
    bool operator==(Box x);
    bool operator!=(Box x);
    Box operator++();
    Box operator++(int x);
    Box operator--();
    Box operator--(int x);
    void operator*=(int x);
    void operator/=(int x);
    void operator+=(int x);
    void operator-=(int x);
    friend ostream &operator<<(ostream &os, Box x);
};

#endif