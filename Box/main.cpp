/* Create a class Box to save and control rectangular parallelepiped. We need three real numbers for length, width and height.
Create:
1. A blank constructor that consider all of the variables as 0.
2. A constructor with parameters.
3. Getters and setter for the variables.
4. An operator * that multiplies the shape's dimensions with a constant number (real).
5. An operator / that divides the shape's dimensions with a constant number (real).
6. An operator + that adds a constant number (real) at every dimension.
7. An operator - that subtracts a constant number (real) from every dimension.
8. An operator + that adds two objects from Box class.
9. An operator - that subtracts two objects from Box class.
10. An operator = that copies every dimension of a Box object to a new one.
11. A Boolean operator == that checks if two objects are equal.
12. A Boolean operator != that checks if two objects are not equal.
13. Operators ++, -- that add and subtract 1 to every dimension (create prefix and postfix versions).
14. Operator +=, -=, *=, /= for every operation with a constant number (integer).
Also, overload the << operator to print every dimension of a Box object ("length: XXX, width: XXX, height: XXX")
The main code is given. */

#include <iostream>

#include "Box.h"

using namespace std;

int main()
{
    float x1,y1,z1; //1st box data
    cin>>x1>>y1>>z1;
    Box b1(x1,y1,z1);

    float x2,y2,z2; //2nd box data
    cin>>x2>>y2>>z2;
    Box b2(x2,y2,z2);

    Box b3; //zero box
    Box b4; //zero box

    cout<<"Dimensions of created boxes:"<<endl;
    cout<<"Box-1:"<<b1<<endl;
    cout<<"Box-2:"<<b2<<endl;
    cout<<"Box-3:"<<b3<<endl;
    cout<<"Box-4:"<<b4<<endl<<endl;

    b3 = b1*2-1;
    b4 = (b2+5)/2;

    cout<<"Dimensions of boxes 3,4 after operations:"<<endl;
    cout<<"Box-3:"<<b3<<endl;
    cout<<"Box-4:"<<b4<<endl;
    if (b3==b4)
        cout<<"The boxes are equal."<<endl<<endl;
    if (b3!=b4)
        cout<<"The boxes are not equal."<<endl<<endl;

    b1 = b3+b4;
    b2 = (b3*3)-b4;

    cout<<"Dimensions of boxes 1,2 after operations:"<<endl;
    cout<<"Box-1:"<<b1<<endl;
    cout<<"Box-2:"<<b2<<endl<<endl;

    cout<<"Other operations:"<<endl;
    b1+=4;
    b2-=1;
    b3*=3;
    b4/=2;
    cout<<++b1<<endl;
    cout<<b2++<<endl;
    cout<<--b3<<endl;
    cout<<b4--<<endl;

    return 0;
}
