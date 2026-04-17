#include "DynamicArray.h"

int main()
{
    DynamicArray d;
    int ch, val, pos;

    do {
        cout<<"\n1.Insert 2.Delete 3.Display 4.Exit\n";
        cin>>ch;

        if(ch==1)
        {
            cin>>val;
            d.insert(val);
        }
        else if(ch==2)
        {
            cin>>pos;
            d.remove(pos);
        }
        else if(ch==3)
        {
            d.display();
        }

    } while(ch!=4);

    return 0;
}