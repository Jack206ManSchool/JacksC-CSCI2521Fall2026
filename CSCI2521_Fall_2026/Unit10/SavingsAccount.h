#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include<fstream>

class SavingsAccount : public Account
{
protected:
    float interest;
public:
    SavingsAccount();
    SavingsAccount(const string& accNum, double initialBalance, float interest, const Customer& customer);
    void save();
    void closeOfBusiness();
    void printAccountInfo() const;
};

#endif


