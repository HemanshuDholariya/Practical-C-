#include<iostream>
#include<queue>
#include "temp.h"

using namespace std;

int main()
{
    queue<calsius> qc;
    queue<fehrenheit> qf;

    calsius cc(5);
    fehrenheit ff(20);

    ff = cc;
    cc = ff;

    qc.push(cc);
    qf.push(ff);

    cout << "convert to c --> f:";
    ff.display();

    cout << "\nconvert to f --> c:";
    cc.display();

    cout << "\nQueue stored calsius values: ";
    while(!qc.empty())
    {
        qc.front().display();
        qc.pop();
        cout << " ";
    }

    cout << "\nQueue stored Fahrenheit values: ";
    while(!qf.empty())
    {
        qf.front().display();
        qf.pop();
        cout << " ";
    }

    calsius cc1(100);
    fehrenheit ff1(212);

    if(ff1 == cc1)
    {
        cout << "\nboth temp are same " << ff1.sett() << " and " << cc1.sett();
    }
    else
    {
        cout << "\nboth temp are not same " << ff1.sett() << " and " << cc1.sett();
    }

    return 0;
}