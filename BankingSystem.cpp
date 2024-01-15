// BankingSystem.cpp
#include "Customer.h"
#include "Account.h"
#include <iostream>

int main() {
    Customer customer1(1, "John Doe", "john@example.com");
    Customer customer2(2, "Jane Smith", "jane@example.com");

    Account account1(101, 1000.0, &customer1);
    Account account2(102, 500.0, &customer2);

    customer1.addAccount(&account1);
    customer
