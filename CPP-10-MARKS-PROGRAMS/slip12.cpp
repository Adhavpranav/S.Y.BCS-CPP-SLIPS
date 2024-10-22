/*
Write a C++ program to create a class Student with data members Roll_No, 
Student_Name, Class. Write member functions to accept and display Student information 
also display count of students. (Use Static data member and Static member function).
*/
#include<iostream>
using namespace std;
class Student
{
    int Roll_no;
    string Student_name;
    static int count;
    public:
    void accept()
    {
        cout<<endl<<"ENTER STUDENT ROLL NUMBER:";
        cin>>Roll_no;
        cout<<"ENTER STUDENT NAME:";
        cin>>Student_name;
        count++;
    }
    void display()
    {
        cout<<endl<<"ROLL NUMBER:"<<Roll_no;
        cout<<endl<<"STUDENT NAME:"<<Student_name;
        cout<<endl;
    }
    static int count_student()
    {
        return count;
    }

};
int Student::count=0;
int main()
{
    Student s1[100];
    int limit;
    cout<<"ENTER A LIMIT:";
    cin>>limit;
    for(int i=0;i<limit;i++)
    {
        s1[i].accept();
    }
    cout<<endl<<"STUDENT DETAILS:";
     for(int i=0;i<limit;i++)
    {
        s1[i].display();
    }
    cout<<endl<<"COUNT OF STUDENT IS:"<<Student::count_student();
}
