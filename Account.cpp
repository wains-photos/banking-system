// Account.cpp
#include "Account.h"
#include "Customer.h"
#include <iostream>

Account::Account(int accountId, double balance, Customer* customer)
    : accountId(accountId), balance(balance), customer(customer) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds\n";
    }
}

void Account::displayAccountInfo() {
    std::cout << "Account ID: " << accountId << ", Balance: $" << balance << ", Owner: " << customer->getName() << std::endl;
}
