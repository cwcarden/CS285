//
// Created by charles on 10/17/22.
//

#include "bankAccount.h"
#include <iomanip>

using namespace std;

int bankAccount::x = 0;

void bankAccount::withdraw(double amount) {
    if (accountBalance - (amount < 0)) {
        cout << "Failed Transaction -- Insufficient balance! " << endl;
        return;
    }
    accountBalance -= amount;
}

void bankAccount::deposit(double amount) {
    cout << setprecision(2);
    accountBalance += amount;
}

//Balance times interest rate
double bankAccount::getInterest() {
    return (accountBalance * interestRate);
}

//Add interest to balance
void bankAccount::updateBalance() {
    accountBalance += getInterest();
}

//Display account Info
void bankAccount::print() {
    cout << "------------Account Information------------" << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Account Type: " << accountType << endl;
    cout << "Balance Amount: " << accountBalance << endl;
    cout << "Interest Rate: " << interestRate << endl;
    cout << "-------------------------------------------" << endl;
}

//Get account number
int bankAccount::getAccountNumber() {
    return accountNumber;
}

//Get account holder name
string bankAccount::getAccountHolderName() {
    return accountHolderName;
}

//Get Account type
string bankAccount::getAccountType() {
    return accountType;
}

//Get Account balance
double bankAccount::getBalance() {
    return accountBalance;
}

//Get Interest Rate
double bankAccount::getInterestRate() {
    return interestRate;
}