#include "Product.h"
#include <string.h>

Product::Product(unsigned int id, char *name, float price)
{
  this->id=id;
  this->name=new char[strlen(name)+1];
  strcpy(this->name, name);
  this->price=price;
}

Product::~Product() {}

char* Product::getName()
{
  return name;
}

unsigned int Product::getId()
{
  return id;
}

float Product::getPrice()
{
  return price;
}
