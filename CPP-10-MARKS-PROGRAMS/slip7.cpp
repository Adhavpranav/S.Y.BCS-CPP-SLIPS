/*
Write a C++ program to accept two integers and an arithmetic operator (+, -, *, /) from 
user and performs the corresponding arithmetic operation and display the result. (Use 
switch statement).         
*/
#include<iostream>
using namespace std;
int a,b;
char oper;
void accept()
{
    cout<<"ENTER TWO NUMBERS:";
    cin>>a>>b;
    cout<<"ENTER AN ARITHMETIC OPERATOR:";
    cin>>oper;
}
void operation()
{
    switch(oper)
    {
        case '+':cout<<"ADDITION IS:"<<a+b;break;
        case '-':cout<<"SUBTRACTION IS:"<<a-b;break;
        case '*':cout<<"MULTIPLICATION IS:"<<a*b;break;
        case '/':cout<<"DIVISION IS:"<<a/b;break;
        default:cout<<"INVALID CHOICE:";
    }
}
int main()
{
    accept();
    operation();
}
