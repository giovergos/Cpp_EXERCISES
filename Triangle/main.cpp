/* Create a class Triangle which represents a triangle. We need the coordinations of the three angles (ABC), so create two constructors:
a blank one which considers that the three spots are in O(0,0) and another one which receives the coordinations (x,y) for the three spots. The class should also contains setters and getters for the six variables (xa, ya, xb, yb, xc, yc).
Moreover, we need three functions that calculate triangle's three side's distances using Euclidean distance. Also we need three functions that calculate triangle's angles using law of cosines.
Furthermore, you should create functions to answer the following questions:
A) Is triangle equilateral? B) Is triangle isosceles? C) Is triangle scalene? D) Is triangle right-angled? E) Is triangle acute? F) Is triangle obtuse? G) What is the length of triangle's base (consider the AB side as the base) H) What is triangle's height? I) What is triangle's area?
The main code is given. */

#include <cmath>
#include <iostream>
#include <iomanip>
#include "Triangle.h"

#ifndef M_PI
#define M_PI 3.14159265
#endif //M_PI

using namespace std;

double roundTo(double val, int digits)
{
    double k = pow(10,digits);
    return round(val*k)/k;
}

void print (Triangle &a)
{
    cout<<"Plevres: "<<roundTo(a.getAB(),1)<<", "<<roundTo(a.getAC(),1)<<", "<<roundTo(a.getBC(),1)<<endl;
    cout<<"Gonies: a= "<<roundTo(a.getA()*180/M_PI,1)<<" b= "<<roundTo(a.getB()*180/M_PI,1)<<", c= "<<roundTo(a.getC()*180/M_PI,1)<<endl;

    if (a.isIsopleurous())
        cout<<"Isoplevro"<<endl;
    else
        if (a.isIsosceles())
            cout<<"Isosceles"<<endl;
        else
            if (a.isScalino())
                cout<<"Scalino"<<endl;

    if (a.isOrthogonio())
        cout<<"Orthogonio"<<endl;
    else
        if (a.isOxygonio())
            cout<<"Oxygonio"<<endl;
        else
            if (a.isAmvligonio())
                cout<<"Amvligonio"<<endl;

    cout<<"Height: "<<roundTo(a.getHeight(),1)<<" Base: "<<roundTo(a.getBase(),1)<<" Area: "<<roundTo(a.getArea(),1)<<endl;
}
int main()
{
    Triangle b(0,0,4,0,0,4);
    Triangle a;

    float xa,ya,xb,yb,xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    a.SetXA(xa);
    a.SetYA(ya);
    a.SetXB(xb);
    a.SetYB(yb);
    a.SetXC(xc);
    a.SetYC(yc);

    cout<<"First Triangle"<<endl;
    print(b);
    cout<<endl<<"Second Triangle"<<endl;
    print(a);
    return 0;
}
