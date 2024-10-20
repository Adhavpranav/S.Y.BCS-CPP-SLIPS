/*
 Write a C++ program to create a class ‘MyNumber’ with three data members of type 
integer. Create and initialize the object using default constructor, parameterized 
constructor and parameterized constructor with default value. Write a member function to 
display average of given three numbers for all objects.      
*/

#include<iostream>
using namespace std;
class MyNumber
{
    private:
    int a,b,c;
    public:
    MyNumber()
    {
        a=10;
        b=20;
        c=10;
    }
    MyNumber(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
     MyNumber(int a,int b=50,long int c=30)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void average()
    {
        cout<<endl<<"AVERAGE IS:"<<(a+b+c)/3;
    }
};

int main()
{
    MyNumber ob1,ob2(10,20,30), ob3(20);
    ob1.average();
    ob2.average();
    ob3.average();
}
