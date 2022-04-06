#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "Account.h"

class CreditCard : public Account
{
  protected:  
    double limit;
  public:
    CreditCard(char *description, float balance, double limit);
    bool withdraw(float amount);
};

#endif