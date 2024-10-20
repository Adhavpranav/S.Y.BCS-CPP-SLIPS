/*
Write a C++ program to create a class ‘MyArray’ which contains single dimensional 
integer array of given size. Write a member function to display even and odd numbers 
from a given array. (Use Dynamic Constructor to allocate and Destructor to free memory 
of an object).       
*/
#include<iostream>
using namespace std;
class MyArray
{
    private:
    int*arr,limit;
    public:
    MyArray()
    {
        cout<<"ENTER A LIMIT:";
        cin>>limit;
        arr=new int[limit];
        cout<<"ENTER ELEMENTS OF AN ARRAY:";
        for(int i=0;i<limit;i++)
        cin>>arr[i];
        even_odd_num();
    }
    void even_odd_num()
    {
        cout<<endl<<"EVEN NUMBERS:";
        for(int i=0;i<limit;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<" "<<arr[i];
            }
        }
        cout<<endl<<"ODD NUMBERS:";
        for(int i=0;i<limit;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<" "<<arr[i];
            }
        }
    }
    ~MyArray()
    {
        delete []arr;
    }
};

int main()
{
    MyArray obj;
}
