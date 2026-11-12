/**
 * Course: CSC 2210, Fall 2026
 * Instructor: Dr. Chibuzo Ukegbu
 * BankAccount.cpp: Week 6 review exercise.
 */
#include "BankAccount.h"

#include <iostream>

bool BankAccount::validOwner(const std::string& name) {
    // This tests character count, not whether the characters are letters.
    return name.size() >= 2;
}

BankAccount::BankAccount() : BankAccount{"", 0.0} {
    //++open;
}

BankAccount::BankAccount(const std::string& who) : BankAccount{who, 0.0} {}

BankAccount::BankAccount(const std::string& who, double start)
    : owner{validOwner(who) ? who : "none"},
      balance{start < 0.0 ? 0.0 : start},number{nextNumber++} {
    ++open;
    std::cout << "Open " << number << ' ';
}

BankAccount::~BankAccount() {
    --open;
    std::cout << "Close " << number << ' ';
}

void BankAccount::deposit(double amt) {
    if (amt > 0.0) {
        // this points to the account on which deposit was called.
        // ada.deposit(25) changes ada; ben.deposit(25) changes ben.
        this->balance += amt;
    }
}

bool BankAccount::withdraw(double amt) {
    bool success{false};

    if (amt > 0.0 && amt <= balance) {
        balance -= amt;
        success = true;
    }

    return success;
}

double BankAccount::getBalance() const {
    return balance;
}

std::string BankAccount::getOwner()const {
    // Return a copy of the name, so callers cannot edit owner directly.
    return owner;
}

void BankAccount::setOwner(std::string name) {
    // A non-static member function can call this static validation helper.
    if (validOwner(name)) {
        owner = name;
    }
}

void BankAccount::print() const {
    // Writing to cout does not modify the BankAccount object.
    std::cout << number << ": " << getBalance() << '\n';
}

 int BankAccount::openAccounts() {
    // No object is needed: open is shared class data.
    return open;
}
int BankAccount::getNumber()const {
    return number;
}
double BankAccount::totalBalance(const BankAccount accounts[], int size) {
    double total{0.0};

    for (int i = 0; i < size; ++i) {
       const BankAccount& account = accounts[i];
        total += account.getBalance();
    }

    return total;
}
