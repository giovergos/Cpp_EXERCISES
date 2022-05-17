#include "CreditCard.h"

CreditCard::CreditCard(char *description, float balance, double limit) : Account(description, balance)
{
  this->limit=limit;
}
bool CreditCard::withdraw(float amount)
{
  if(amount<=limit)
  {
    balance-=amount;
    limit-=amount;
    return true;
  }
  return false;
}
