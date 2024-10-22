/*
Write a C++ program to accept length and width of a rectangle. Calculate and display 
perimeter as well as area of a rectangle by using Inline function.       
*/
#include<iostream>
using namespace std;
void accept(float &length,float &width)
{
    cout<<"ENTER LENGTH OF RECTANGLE:";
    cin>>length;
    cout<<"ENTER WIDTH OF RECTANGLE:";
    cin>>width;
}
inline float perimeter(float length,float width)
{
    return (length+width)*2;
}
inline float area(float length,float width)
{
    return (length*width);
}
int main()
{
    float length,width;
    accept(length,width);
    cout<<endl<<"PERIMETER OF RECTANGLE IS:"<<perimeter(length,width);
    cout<<endl<<"AREA OF RECTANGLE IS:"<<area(length,width);
    return 0;
}
