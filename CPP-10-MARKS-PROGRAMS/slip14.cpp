/*
 Write a C++ program to print the following pattern. 
               * 
             * * 
           * * * 
         * * * *   
*/
#include<iostream>
using namespace std;
int main()
{
    int j;
    for(int i=0;i<4;i++)

    {
        for(j=4;j>i;j--)
        {
            cout<<"     ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*    ";
        }
        cout<<endl;
    }
}
