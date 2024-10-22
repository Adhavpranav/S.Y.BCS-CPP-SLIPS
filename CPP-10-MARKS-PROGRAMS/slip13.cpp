/*
Write a C++ program to print the following pattern. 
A    
B C   
D E F  
G H I J           
*/

#include<iostream>
using namespace std;
int main()
{
    char Letter='A';
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
        cout<<Letter++<<"   ";  
        }
        cout<<endl;
    }
}
