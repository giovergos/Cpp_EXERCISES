#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"

class Savings : public Account
{
  protected:  
    int times;
  public:
    Savings(char *description, float balance);
    bool withdraw(float amount);
};

#endif