#include "Stack.h"
#include <stdlib.h>

Stack::Stack()
{
  size=10;
  data=new int[size];
  top=-1;
}

Stack::Stack(int n)
{
  size=n;
  data=new int[size];
  top=-1;
}

Stack::Stack(Stack &other)
{
  size=other.size;
  data=new int[size];
  top=other.top;
  int i;
  for(i=0;i<=other.top;i++)
    data[i]=other.data[i];
}

Stack::~Stack()
{
  delete[] data;
}

bool Stack::isEmpty()
{
  if(top==-1)
    return true;
  return false;
}

bool Stack::pop(int &element)
{
  if(top>-1)
  {
    element=data[top];
    top--;
    return true;
  }
  return false;
}

bool Stack::push(int element)
{
  if(top+1==size)
  {
    size+=5;
    data=(int*)realloc(data, size*sizeof(int));
    top++;
    data[top]=element;
    return true;
  }
  else if(top==-1)
  {
    top++;
    data[top]=element;
    return true;
  }
  else if(top>-1&&top+1<size)
  {
    top++;
    data[top]=element;
    return true;
  }
  return false;
}
