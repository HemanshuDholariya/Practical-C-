#include "Account.h"

void Account::setData(int a, double b) {
    accNo = a;
    balance = b;
}

void Account::deposit(double amt) {
    balance += amt;
}

void Account::withdraw(double amt) {
    if (amt <= balance) {
        balance -= amt;
    } else {
        cout << "Low Balance\n";
    }
}

void Account::display() {
    cout << "Acc No: " << accNo << "  Balance: " << balance << endl;
}

void Savings::setRate(double r) {
    rate = r;
}

void Savings::addInterest() {
    balance += balance * rate / 100;
}


void Current::setLimit(double l) {
    limit = l;
}

void Current::withdraw(double amt) {
    if (amt <= balance + limit) {
        balance -= amt;
    } else {
        cout << "Overdraft limit exceeded\n";
    }
}