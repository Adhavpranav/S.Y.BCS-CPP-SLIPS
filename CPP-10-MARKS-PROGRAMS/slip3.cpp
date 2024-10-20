/*
) Write a C++program to calculate following series:  
(1*1) +(2*2) +(3*3) + … +(n*n).  
*/
#include<iostream>
using namespace std;
void series(int n)
{
    int cal=0;
    for(int i=1;i<=n;i++)
    {
        cal=cal+(i*i);
    }
    cout<<endl<<"THE CALCULATION OF THE SERIES IS:"<<cal;
}
int main()
{
    int limit;
    cout<<"ENTER A LIMIT:";
    cin>>limit;
    series(limit);
    return 0;
}
