/*
Write a C++ program to accept ‘n’ float numbers, store them in an array and print the 
alternate elements of an array. (Use dynamic memory allocation). 
*/
#include<iostream>
using namespace std;

void alternative(float *arr,int limit)
{
    cout<<"ALTERNATIVE ELEMENTS OF AN ARRAY:";
    for(int i=0;i<limit;i=i+2)
    {
        cout<<" "<<arr[i];
    }
}

void accept(float *arr,int limit)
{
    cout<<"ENTER ARRAY ELEMENTS:";
    for(int i=0;i<limit;i++)
    cin>>arr[i];
}

int main()
{
    int limit;
    float *arr;
    cout<<"ENTER A LIMIT:";
    cin>>limit;
    arr=new float [limit];
    accept(arr,limit);
    alternative(arr,limit);
    return 0;
}
