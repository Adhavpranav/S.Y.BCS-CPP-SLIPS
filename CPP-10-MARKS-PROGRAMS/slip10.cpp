/*
Write a C++ program to modify contents of an integer array. (Use Call by reference).  
*/
#include<iostream>
using namespace std;
void modify_contents(int &element)
{
    element=element+1;
}
int main()
{
    int limit,array[100];
    cout<<"ENTER ARRAY LIMIT:";
    cin>>limit;
    cout<<"ENTER ARRAY ELEMENTS:";
    for(int i=0;i<limit;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<limit;i++)
    {
    modify_contents(array[i]);
    }
    cout<<endl<<"MODIFYED ARRAY:";
    for(int i=0;i<limit;i++)
    {
        cout<<" "<<array[i];
    }
}
