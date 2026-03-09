#include <iostream>

using namespace std;

class bank
{
    int no;
    static int x;
    string name;
    int balance;

public:
   void inputdata();
   void searchs(int);
    void transfer(int);
    void add(int);
};

int bank::x=0;

void inputdata()
{
    cout<<"enter your name";
    cin>>name;

    cout<<"enter your balance";
    cin>>balance;

    no=x++;

}

void bank::searchs(int z)
{
  if(no==z)
  {
      return 'v';
  }
  else
  {
      return 'i';

  }

}

void bank::transfer(int m)
{
    balance-=m;
}

void add(int m)
{
    balance+=m;
}


int main()
{
    int n,c;

    cout<<"enter number of account";
    cin>>n;
    bank *acc = new bank[n];

    cout<<"1.input\n2.transfer\n3.display";
    cin>>c;


    switch(c)
    {

   case 1:

      for(int i=0;i<n;i++)
      {
        n[i]->inputdata();
      }

   case 2:
       int ac,acc,money;

       cout<<"enter account number:";
       cin>>ac;

       cout<<"enter account number";
       cin>>acc;

       for(int i=0;i<n;i++)
       {
            if(n[i].searchs(ac)=='v')
            {
                cout<<"enter transfe money";
                cin>>money;

                n[i].transfer(money);
                n[i].add(money);
            }
            else
            {
                cout<<"not valid account";

            }

      }

   case 3:

   /* int ac,money,acc;

       cout<<"enter your account number:";
       cin>>ac;

       cout<<"enter account number";
       cin>>acc;


       for(int i=0;i<n;i++)
       {
            if(n[i].add(ac)=='v')
            {
                cout<<"enter add money";
                cin>>money;

                n[i].transfer(money);
            }
            else
            {
                cout<<"not valid account";
            }*/

    }

}
