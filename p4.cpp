#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float m1, m2, m3;

public:

    Student()
    {
        name = "Test";
        roll = 0;
        m1 = m2 = m3 = 5;
    }

    Student(string n, int r, float s1, float s2, float s3)
    {
        name = n;
        roll = r;

        m1 = (s1 >= 0 && s1 <= 100) ? s1 : 0;
        m2 = (s2 >= 0 && s2 <= 100) ? s2 : 0;
        m3 = (s3 >= 0 && s3 <= 100) ? s3 : 0;
    }

    void display()
    {
        float avg = (m1 + m2 + m3) / 3;
        cout<<"roll:"<<roll;
        cout<<"\nname:"<<name;
        cout<<"\navg:"<<avg;

    }
};

int main()
{
    string name;
    float m1,m2,m3;
    int id;

    cout<<"enter your name:";
    cin>>name;

    cout<<"entre id:";
    cin>>id;

    cout<<"enter marks:";
    cin>>m1>>m2>>m3;

    Student records[2] =
    {
        Student(),
        Student(name,id,m1,m2,m3)
    };

    for(int i = 0; i < 2; i++)
    {
        records[i].display();
        cout<<endl;
    }
    return 0;
}
