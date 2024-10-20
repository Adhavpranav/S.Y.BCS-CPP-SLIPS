/*
Design two base classes Personnel (name, address, email-id, birth date) and Academic 
(marks in tenth, marks in twelfth class obtained). Derive a class Bio-data from both these 
classes. Write a C++ program to prepare a bio-data of a student having Personnel and 
Academic information.  
*/
#include<iostream>
using namespace std;
class Personnel
{
    protected:
    string name,address,email_id;
    string birth_date;
    public:
        void accept_personnel_info()
        {
            cout<<endl<<endl<<"ENTER STUDENT NAME:";
            cin>>name;
            cout<<"ENTER STUDENT ADDRESS:";
            cin>>address;
            cout<<"ENTER STUDENT EMAIL ID:";
            cin>>email_id;
            cout<<"ENTER STUDENT BIRTH DATE:";
            cin>>birth_date;
        }
};
class Academic
{
    protected:
    float marks_in_tenth,marks_in_twelfth;
    public:
        void accept_academic_info()
        {
            cout<<endl<<"ENTER 10TH CLASS MARKS OF STUDENT:";
            cin>>marks_in_tenth;
            cout<<endl<<"ENTER 12TH CLASS MARKS OF STUDENT:";
            cin>>marks_in_twelfth;
        }
};

class Bio_data :public Personnel,public Academic
{
    public:
        void display()
        {
            cout<<endl<<"STUDENT NAME:"<<name;
            cout<<endl<<"STUDENT ADDRESS:"<<address;
            cout<<endl<<"STUDENT EMAIL ID:"<<email_id;
            cout<<endl<<"STUDENT BIRTH DATE:"<<birth_date;
            cout<<endl<<"STUDENTS 10TH CLASS MARKS:"<<marks_in_tenth;
            cout<<endl<<"STUDENTS 12TH CLASS MARKS:"<<marks_in_twelfth;
        }
};

int main()
{
    Bio_data obj;
    cout<<endl<<"ENTER STUDENT PERSONAL INFO:";
    obj.accept_personnel_info();
    cout<<endl<<"ENTER STUDENT ACEDAMIC INFO:";
    obj.accept_academic_info();
    cout<<endl<<"STUDENT DETAILS:";
    obj.display();
    return 0;
}
