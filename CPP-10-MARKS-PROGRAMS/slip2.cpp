/*
Write a C++ program to define power function to calculate x^y. (Use default value  
as 2   for y).  
*/
#include<iostream>
using namespace std;
int power(int x,int y=2)
{
    int result=1;
    for(int i=0;i<y;i++)
    {
        result=result*x;
    }
    return result;
}
int main()
{
    int x,y;
    cout<<"ENTER A NUMBER:";
    cin>>x;
    cout<<"ENTER THE POWER:";
    cin>>y; 
    cout<<"THE POWER OF "<<x<<"^"<<y<<" IS: "<<power(x,y)<<endl;
    cout<<"THE POWER OF "<<x<<"^"<<"2"<<" IS: "<<power(x);
    return 0;
}
