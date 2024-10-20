/*
 Write a C++ program to create a class Distance with data members feet and inches. Write 
member functions for the following: 
a. To accept distance 
b. To display distance 
c. To add two distance objects 
(Use object as a function argument and function returning object). 
*/
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet,inches;
    public:
        void accept()
        {
            cout<<endl<<"ENTER FEET AND INCHES:";
            cin>>feet>>inches;
        }
        void display()
        {
            cout<<endl<<"FEET:"<<feet;
            cout<<endl<<"INCHES:"<<inches;
        }
        Distance addition_of_obj(Distance ob1)
        {
            Distance ob3;
            ob3.feet=ob1.feet+feet;
            ob3.inches=ob1.inches+inches;
            while(ob3.inches>=12)
            {
                ob3.inches=ob3.inches-12;
                ob3.feet+=1;
            }
            return ob3;
        }
};

int main()
{
    Distance ob1,ob2,ob3;
    cout<<endl<<"ENTER 1ST OBJECT DISTANCE:";
    ob1.accept();
    cout<<endl<<"ENTER 2ND DISTANCE:";
    ob2.accept();
    cout<<endl<<"FIRST OBJECT DISTANCE:";
    ob1.display();
    cout<<endl<<"SECOND OBJECT DISTANCE:";
    ob2.display();
    ob3=ob2.addition_of_obj(ob1);
    cout<<endl<<"ADDITION OF TWO OBJECT:";
    ob3.display();
}
