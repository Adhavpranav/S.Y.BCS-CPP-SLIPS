/*
Write a C++ program to create two classes Array1 and Array2 with an integer array as a 
data member. Write necessary member functions to accept and display array elements of 
both the classes. Find and display maximum of both the array. (Use Friend function).  
*/
#include<iostream>
using namespace std;
class Array2;
class Array1
{
    private:
        int array[100];
        public:
        void accept(int limit)
        {
            cout<<"ENTER FIRST ARRAY ELEMENTS:";
            for(int i=0;i<limit;i++)
            {
                cin>>array[i];
            }
        }
        void display(int limit)
        {
            cout<<endl<<"FIRST ARRAY:";
            for(int i=0;i<limit;i++)
            cout<<" "<<array[i];
        }
        friend void maximum(Array1 ob1,Array2 ob2,int limit);
};
class Array2
{
    private:
        int array[100];
        public:
        void accept(int limit)
        {
            cout<<"ENTER SECOND ARRAY ELEMENTS:";
            for(int i=0;i<limit;i++)
            {
                cin>>array[i];
            }
        }
        void display(int limit)
        {
            cout<<endl<<"SECOND ARRAY:";
            for(int i=0;i<limit;i++)
            cout<<" "<<array[i];
        }
        friend void maximum(Array1 ob1,Array2 ob2,int limit);
};

        void maximum(Array1 ob1,Array2 ob2,int limit)
        {
            int max;
            max=ob1.array[0];
            for(int i=1;i<limit;i++)
            if(max<ob1.array[i])
            max=ob1.array[i];
            for(int i=0;i<limit;i++)
            if(max<ob2.array[i])
            max=ob2.array[i];
            cout<<"MAXIMUM NUMBER IS:"<<max;
        }

int main()
{
    int limit;
    cout<<"ENTER A ARRAY LIMIT:";
    cin>>limit;
    Array1 ob1;
    Array2 ob2;
    ob1.accept(limit);
    ob2.accept(limit);
    ob1.display(limit);
    ob2.display(limit);
    maximum(ob1,ob2,limit);
}
