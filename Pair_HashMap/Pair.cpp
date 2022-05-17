#include "Pair.h"
#include <string.h>

Pair::Pair(int key, const char *value)
{
  this->key=key;
  this->value=new char[strlen(value)+1];
  strcpy(this->value,value);
}

Pair::~Pair()
{
  delete[] value;
}

int Pair::getKey()
{
  return key;
}

char* Pair::getValue()
{
  return value;
}

ostream & operator<<(ostream &os, Pair &kv)
{
  os<<"<"<<kv.getKey()<<","<<kv.getValue()<<">";
  return os;
}
