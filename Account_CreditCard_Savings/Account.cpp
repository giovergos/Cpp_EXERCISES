#include "Account.h"
#include <string.h>

Account::Account(char *description)
{
  this->description=new char[strlen(description)+1];
  strcpy(this->description, description);
  balance=0;
}
Account::Account(char *description, float balance)
{
  this->description=new char[strlen(description)+1];
  strcpy(this->description, description);
  this->balance=balance;
}
bool Account::withdraw(float amount)
{
  if(balance>=amount)
  {
    balance-=amount;
    return true;
  }
  return false;
}
bool Account::deposit(float amount)
{
  balance+=amount;
  return true;
}
float Account::getBalance()
{
  return balance;
}
char* Account::getDescription()
{
  return description;
}
