/*
Write a C++ program to calculate multiplication of two integer numbers of two different 
classes. (Use friend class).
*/

#include<iostream>
using namespace std;
class second;
class first
{
    private:
    int a=5;
    public:
    friend int multiplication(first ob1,second ob2);
};
class second
{
    private:
    int b=3;
    public:
    friend int multiplication(first ob1,second ob2);
};
int multiplication(first ob1,second ob2)
{
    return ob1.a*ob2.b;
}

int main()
{
    first ob1;
    second ob2;
    cout<<"MULTIPLICATION OF TWO NUM IS:"<<multiplication(ob1,ob2);
    return 0;
}
