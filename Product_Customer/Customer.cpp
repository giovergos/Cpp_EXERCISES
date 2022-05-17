#include "Customer.h"
#include <string.h>

Customer::Customer(char *username)
{
  this->username=new char[strlen(username)+1];
  strcpy(this->username, username);
  shoppingCart[MAX_ITEMS-1]={NULL};
}

Customer::~Customer() {}

char* Customer::getUsername()
{
  return username;
}

int Customer::getNumberOfProducts()
{
  int i, num=0;
  for(i=0;i<MAX_ITEMS;i++)
    if(shoppingCart[i]!=NULL)
      num++;
  return num;
}

bool Customer::addProduct(Product *product)
{
  if(getNumberOfProducts()==3)
    return false;
  int i;
  bool flag=false;
  for(i=0;i<MAX_ITEMS && !flag;i++)
    if(shoppingCart[i]==NULL)
    {
      shoppingCart[i]=product;
      flag=true;
    }
  return true;
}

float Customer::getTotalCost()
{
  float tot=0;
  if(getNumberOfProducts()>0)
  {
    int i;
    for(i=0;i<MAX_ITEMS;i++)
    {
      if(shoppingCart[i]!=NULL)
        tot+=shoppingCart[i]->getPrice();
    }
  }
  return tot;
}

Product* Customer::findProductById(unsigned int id, int &pos)
{
  pos=-1;
  int i;
  bool flag=false;
  for(i=0;i<MAX_ITEMS && !flag;i++)
  {
    if(shoppingCart[i]!=NULL)
    {
      if(shoppingCart[i]->getId()==id)
      {
        pos=i;
        flag=true;
      }
    }
  }
  if(flag==true)
    return shoppingCart[pos];
  else 
    return NULL;
}

bool Customer::removeProduct(unsigned int id)
{
  int pos;
  if(findProductById(id, pos)!=NULL)
  {
    shoppingCart[pos]=NULL;
    return true;
  }
  return false;
}
