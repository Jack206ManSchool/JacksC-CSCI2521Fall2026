/**
 * @file SavingsAccount.cpp
 * @author Jack Crawford
 * @date 2026-11-23
 * @brief Code for the SavingsAccount Classe
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : interest(1)
{
}

/**
 * @brief Saves account info to a txt file
 * @return None (void)
 */
void SavingsAccount::save(){
    ofstream fileSave;

    fileSave.open("account_summary.txt");

    if (fileSave.is_open()) {
        fileSave << "Account Number : " << accountNumber << endl;
        fileSave << "Current Balance : " << balance << endl;
        fileSave << "Daily Interest Rate : " << interest * 100 << "%" << endl;

        cout << "File Saved Successfully! : )" << endl;
    }
    else {
        cout << "Sorry, but the file cannot be opened..." << endl;
    }
    
    fileSave.close();
}

SavingsAccount::SavingsAccount(const string& accNum, double initialBalance, float interest, const Customer& customer)
    : Account(accNum, initialBalance, customer)
{    
    this->interest = interest;
}

void SavingsAccount::closeOfBusiness()
{
    double totalDeposits = accumulate(deposits.begin(), deposits.end(), 0.0);
    double totalWithdrawals = accumulate(withdrawals.begin(), withdrawals.end(), 0.0);

    double previousBalance = balance;
    double interestToApply = previousBalance <= 0 ? 0 : interest;
    double newBalance = (previousBalance + totalDeposits - totalWithdrawals) * (1 + interestToApply);

    printSummary(previousBalance, totalDeposits, totalWithdrawals, newBalance);

    balance = newBalance;

    deposits.clear();
    withdrawals.clear();
}

void SavingsAccount::printAccountInfo() const
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: $" << balance << endl;
    cout << "Interest Rate: " << interest * 100 << "%" << endl;
    owner.printCustomerInfo();
}