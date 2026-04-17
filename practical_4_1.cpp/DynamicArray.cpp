#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
    arr = NULL;
    size = 0;
}

void DynamicArray::insert(int val)
{
    int *temp = new int[size+1];

    for(int i=0;i<size;i++)
        temp[i] = arr[i];

    temp[size] = val;

    delete[] arr;
    arr = temp;
    size++;
}

void DynamicArray::remove(int pos)
{
    if(size==0 || pos<0 || pos>=size)
    {
        cout<<"Invalid\n";
        return;
    }

    int *temp = new int[size-1];

    for(int i=0,j=0;i<size;i++)
    {
        if(i!=pos)
            temp[j++] = arr[i];
    }

    delete[] arr;
    arr = temp;
    size--;
}

void DynamicArray::display()
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}