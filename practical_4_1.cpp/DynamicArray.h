#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include<iostream>
using namespace std;

class DynamicArray
{
    int *arr, size;

public:
    DynamicArray();
    void insert(int val);
    void remove(int pos);
    void display();
    ~DynamicArray();
};

#endif