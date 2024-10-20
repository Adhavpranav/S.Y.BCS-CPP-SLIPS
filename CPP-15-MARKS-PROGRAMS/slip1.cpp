/*
Write a C++ program to calculate area and circumference of a Circle. (Use default 
argument, scope resolution operator and manipulator.)   
*/

    #include<iostream>
    using namespace std;
    class Circle
    {
        public:
        float area_of_circle(float radius,float pi=3.14);
        float circumference_of_circle(double radius,float pi=3.14);
    };

    float Circle::area_of_circle(float radius,float pi)
    {
        return pi*(radius*radius);
    }

    float Circle::circumference_of_circle(double radius,float pi)
    {
        return 2*(pi*radius);
    }

    int main()
    {
        Circle obj;
        float radius;
        cout<<"ENTER RADIUS OF CIRCLE:";
        cin>>radius;
        cout<<"AREA OF CIRCLE IS:"<<obj.area_of_circle(radius);
        cout<<endl<<"CIRCUMFERENCE OF CIRCLE:"<<obj.circumference_of_circle(radius);
        return 0; 
    }
