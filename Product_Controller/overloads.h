#ifndef PRODUCTS_OVERLOADS_H
#define PRODUCTS_OVERLOADS_H

#include <iostream>
#include "Product.h"

using namespace std;

ostream& operator<<(ostream &mystream, Product &x)
{
    mystream<<x.getName()<<" "<<x.getPrice();
    return mystream;
}

#endif //PRODUCTS_OVERLOADS_H
