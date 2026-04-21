#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;


class Account {
protected:
    int accNo;
    double balance;

public:
    void setData(int a, double b);
    void deposit(double amt);
    virtual void withdraw(double amt);
    void display();
};


class Savings : public Account {
    double rate;

public:
    void setRate(double r);
    void addInterest();
};


class Current : public Account {
    double limit;

public:
    void setLimit(double l);
    void withdraw(double amt);
};

#endif