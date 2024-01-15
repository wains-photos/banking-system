// Customer.cpp
#include "Customer.h"
#include "Account.h"
#include <iostream>

Customer::Customer(int customerId, const std::string& name, const std::string& email)
    : customerId(customerId), name(name), email(email) {}

void Customer::addAccount(Account* account) {
    accounts.push_back(account);
}

void Customer::displayCustomerInfo() {
    std::cout << "Customer ID: " << customerId << ", Name: " << name << ", Email: " << email << std::endl;
    std::cout << "Accounts:" << std::endl;
    for (const auto& account : accounts) {
        std::cout << "- Account ID: " << account->getAccountId() << ", Balance: $" << account->getBalance() << std::endl;
    }
}
