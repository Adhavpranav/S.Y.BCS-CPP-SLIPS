/*
 Write a C++ program to calculate area and circumference of a Circle. (Use default 
argument, scope resolution operator and manipulator.)  
*/
#include<iostream>
using namespace std;
    class Circle
    {
        public:
        float area_of_circle(float radius=1);
        float circumference_of_circle(float radius=1);
    };
    float Circle::area_of_circle(float radius)
    {
        return 3.14*(radius*radius);
    }
    float Circle::circumference_of_circle(float radius)
    {
        return 2*3.14*radius;
    }
int main()
{
    float radius;
    cout<<"ENTER A RADIUS OF CIRCLE:";
    cin>>radius;
    Circle obj;
    cout<<endl<<"AREA OF CIRCLE IS:"<<obj.area_of_circle(radius);
    cout<<endl<<"CIRCUMFERENCE OF CIRCLE IS:"<<obj.circumference_of_circle(radius);
    return 0;
}
