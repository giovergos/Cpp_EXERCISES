/* Create a class named Vector which represents a vector in 2D. For the class we need the end's coordinates (double variables) as we consider the (0,0) as the starting point.
Create 2 constructors: a blank one that considers the O(0,0) as vector's end, and another one that gets the coordinates (x,y) as parameters. Except of constructors, the class must contains setters and getters for the 2 variables.
Moreover we need:
1. Function "magnitude" which calculates vector's norm.
2. Function "angle" which calculates vector's angle with x-axis in radians.
3. Function "angleD" which calculates vector's angle with x-axis in degrees.
4. Function "multiply" which receives a double number f as parameter and multiplies the vector with f.
5. Function "add" which receives a second vector v as parameter and returns a new vector as the result of adding the existing vector with v.
6. Function "clone" that 'copies' the vector and returns a new vector with the same coordinates.
The main code is given. */

#include <iostream>
#include <iomanip>
#include "Vector.h"

using namespace std;

// Helper function
void print(Vector v)
{
    cout << "(" << v.GetX() << "," << v.GetY() << ")" << endl;
}

/*******************************************************************
 *********************** Main function *****************************
 *******************************************************************/
int main(int argc, char const *argv[])
{
    double x, y, f;

    // read values for coordinates x, y, and f (multiply factor)
    cin >> x >> y >> f;

    // The numbers will be printed with 1 decimal digit by default (see here https://www.cplusplus.com/reference/ios/fixed/)
    cout << fixed << setprecision(1);

    /**
     ***********************************************************
     *********************** TEST CASE 1 ***********************
     ***********************************************************
     */
    cout << "TEST_CONSTRUCTORS" << endl;
    Vector a1, e1(x, y), b1;
    print(a1);
    print(b1);
    print(e1);

    /**
     ***********************************************************
     *********************** TEST CASE 2 ***********************
     ***********************************************************
     */
    cout << "TEST_GETTERS_SETTERS" << endl;
    Vector a2;
    a2.SetX(3);
    a2.SetY(4);
    print(a2);

    a2.SetX(5);
    a2.SetY(5);
    print(a2);

    /**
     ***********************************************************
     *********************** TEST CASE 3 ***********************
     ***********************************************************
     */
    cout << "TEST_MULTIPLY" << endl;
    Vector a3(x, y);
    a3.multiply(f);
    print(a3);

    a3.SetX(x + 2);
    a3.SetY(y + 3);
    a3.multiply(f);
    print(a3);

    /**
     ***********************************************************
     *********************** TEST CASE 4 ***********************
     ***********************************************************
     */
    cout << "TEST_MAGNITUTE" << endl;
    Vector a4(1, 1);
    cout << a4.magnitude() << endl;

    a4.SetX(x);
    a4.SetY(y);
    cout << a4.magnitude() << endl;

    /**
     ***********************************************************
     *********************** TEST CASE 5 ***********************
     ***********************************************************
     */
    cout << "TEST_ANGLE" << endl;
    Vector a5(1, 1);
    cout << a5.angle() << endl;

    a5.SetX(x);
    a5.SetY(y);
    cout << a5.angle() << endl;

    /**
     ***********************************************************
     *********************** TEST CASE 6 ***********************
     ***********************************************************
     */
    cout << "TEST_ANGLED" << endl;
    Vector a6(1, 1);
    cout << a6.angleD() << endl;

    a6.SetX(x);
    a6.SetY(y);
    cout << a6.angleD() << endl;

    /**
     ***********************************************************
     *********************** TEST CASE 7 ***********************
     ***********************************************************
     */
    cout << "TEST_ADD" << endl;
    Vector a7(x, y);
    Vector e7;
    Vector b7 = a7.add(e7);
    print(b7);

    /**
     ***********************************************************
     *********************** TEST CASE 8 ***********************
     ***********************************************************
     */
    cout << "TEST_CLONE" << endl;
    Vector a8(x, y);
    Vector b8 = a8.clone();
    print(b8);

    return 0;
}
