#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
protected:
    float balance;
    char *description;

public:
    Account(char *description);
    Account(char *description, float balance);
    virtual bool withdraw(float amount);
    bool deposit(float amount);
    float getBalance();
    char *getDescription();
};

#endif // ACCOUNT_H