/*
Write a C++ program to calculate area of cone, sphere and circle by using function 
overloading. 
*/
#include<iostream>
using namespace std;
float area(float radius,float length)
{
    return 3.14*radius*(radius+length);
}

float area(float radius)
{
    return 4*3.14*(radius*radius);
}

float area(double radius)
{
    return 3.14*(radius*radius);
}

int main()
{
    float radius,length;
    cout<<"ENTER RADIUS:";
    cin>>radius;
    cout<<"ENTER LENGTH:";
    cin>>length;
    cout<<"AREA OF CONE:"<<area(radius,length);
    cout<<endl<<"AREA OF SPHERE:"<<area(radius);
    double radius1=radius;
    cout<<endl<<"AREA OF CIRCLE:"<<area(radius1);
}
