#include "BankAccount.h"
#include<iostream>
using namespace std;



bool BankAccount::validOwner(const std::string& name) {
    // This tests character count, not whether the characters are letters.
    return name.size() >= 2;
}

BankAccount::BankAccount(): BankAccount("", 0.0){}

BankAccount::BankAccount(const std::string& who):BankAccount{who,0.0} {}

BankAccount::BankAccount(const std::string& who, double start): owner{validOwner(who) ? who : "none"},
      number{nextNumber++},
      balance{start < 0.0 ? 0.0 : start} {
    ++open;
    std::cout << "Open " << number << ' '; {
    }
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
    // An ordinary object can call a const member function too.
    return balance;
}

int BankAccount::getNumber() const {
    return number;
}

std::string BankAccount::getOwner() const {
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
    std::cout << number << ": " << balance << '\n';
}

int BankAccount::openAccounts() {
    // static is written in the header declaration, not repeated here.
    // No object is needed: open is shared class data.
    return open;
}
