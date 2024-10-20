/*
Write a C++ program to calculate maximum and minimum of two integer numbers of two 
different classes (Use friend function).
*/
#include<iostream>
using namespace std;
class Second;
class First
{
    private:
    int a;
    public:
    First(int a)
    {
        this->a=a;
    }
    friend void Max_Min(First,Second);
};

class Second
{
    private:
    int b;
    public:
    Second(int b)
    {
        this->b=b;
    }
    friend void Max_Min(First,Second);
};

void Max_Min(First ob1,Second ob2)
{
    if(ob1.a>ob2.b)
        cout<<ob1.a<<" IS A MAXIMUM NUMBER "<<endl<<ob2.b<<" IS A MINIMUM NUMBER";
    else
        cout<<ob2.b<<" IS A MAXIMUM NUMBER "<<endl<<ob1.a<<" IS A MINIMUM NUMBER";

}

int main()
{
    First ob1(10);
    Second ob2(20);
    Max_Min(ob1,ob2);
}
