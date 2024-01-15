// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>

class Customer; // Forward declaration

class Account {
public:
    Account(int accountId, double balance, Customer* customer);
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountInfo();

private:
    int accountId;
    double balance;
    Customer* customer;
};

#endif
