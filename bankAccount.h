//
// Created by charles on 10/17/22.
//

#ifndef BANKACOUNT_BANKACCOUNT_H
#define BANKACOUNT_BANKACCOUNT_H
#include<iostream>
#include<string>

using namespace std;


class bankAccount {
private:
    string accountHolderName;
    int accountNumber;
    string accountType;
    double accountBalance;
    double interestRate;
    static int x;

public:
    //constructor
    bankAccount(string name, string type, double balance, double rate) : accountHolderName(name), accountType(type),
    accountBalance(balance), interestRate(rate) {
        x++;
        accountNumber = 521000 + x;
    }

    void deposit(double amount);
    void withdraw(double amount);
    double getInterest();
    void updateBalance();
    void print();
    int getAccountNumber();
    string getAccountHolderName();
    string getAccountType();
    double getBalance();
    double getInterestRate();
};





#endif //BANKACOUNT_BANKACCOUNT_H
