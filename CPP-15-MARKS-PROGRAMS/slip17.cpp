/*
 Create a base class Shape. Derive three different classes Circle, Rectangle and Triangle 
from Shape class. Write a C++ program to calculate area of Circle, Rectangle and 
Triangle. (Use pure virtual function). 
*/
#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void accept()=0;
    virtual void display()=0;
};
class Circle:public Shape
{
    float radius;
    public:
    void accept()
    {
        cout<<endl<<"ENTER RADIUS OF CIRCLE:";
        cin>>radius;
    }
    void display()
    {
        cout<<endl<<"AREA OF CIRCLE IS:"<<3.14*(radius*radius);
    }
};
class Rectangle:public Shape
{
    float length,width;
    public:
    void accept()
    {
        cout<<endl<<"ENTER LENGTH AND WIDTH OF RECTANGLE:";
        cin>>length>>width;
    }
    void display()
    {
        cout<<endl<<"AREA OF RECTANGLE IS:"<<(length*width);
    }

};
class Triangle:public Shape
{
    float  breadth,height;
    public:
    void accept()
    {
        cout<<endl<<"ENTER BREADTH AND HEIGHT OF Triangle:";
        cin>>breadth>>height;
    }
    void display()
    {
        cout<<endl<<"AREA OF Triangle IS:"<<(0.5*(breadth*height));
    }
};

int main()
{
    Circle obj1;
    Rectangle obj2;
    Triangle obj3;
    obj1.accept();
    obj2.accept();
    obj3.accept();
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
