#include "Savings.h"

Savings::Savings(char *description, float balance) : Account(description, balance)
{
  times=0;
}
bool Savings::withdraw(float amount)
{
  if(times<3)
  {
    if(balance>=amount)
    {
      times++;
      balance-=amount;
      return true;
    }
    return false;
  }
  return false;
}
