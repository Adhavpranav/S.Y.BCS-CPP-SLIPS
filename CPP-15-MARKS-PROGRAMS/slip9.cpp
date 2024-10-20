/*
 Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily 
rate, number of days, salary) and Part time (number of working hours, hourly rate, salary) 
from Employee. Write a C++ menu driven program to: 
i. Accept the details of ‘n’ employees and calculate the salary. 
ii. Display the details of ‘n’ employees. 
iii. Search a given Employee.    
*/
#include<iostream>
using namespace std;
class Employee
{
    protected:
    int emp_code;
    string name;
    public:
    virtual void accept()
    {
        cout<<endl<<"ENTER EMP CODE:";
        cin>>emp_code;
        cout<<"ENTER EMP NAME:";
        cin>>name;
    }
    virtual void display()
    {
        cout<<endl<<"EMP CODE:"<<emp_code;
        cout<<endl<<"EMP NAME:"<<name;
    }
};
class Fulltime:public Employee
{
    protected:
    int daily_rate,no_of_days,salary=0;
    public:
    void accept1()
    {
        cout<<"ENTER DAILY RATE:";
        cin>>daily_rate;
        cout<<"ENTER NUMBER OF DAYS:";
        cin>>no_of_days;
    }
    void calculate_salary()
    {
        salary=daily_rate*no_of_days;
    }
    void display1()
    {
        cout<<endl<<"DAILY RATE:"<<daily_rate;
        cout<<endl<<"NUMBER OF DAYS:"<<no_of_days;
        cout<<endl<<"SALARY:"<<salary<<endl;
    }
    int search(Fulltime ob1[],int full_time_limit,string search_name)
    {
        for(int i=0;i<full_time_limit;i++)
        {
            if(ob1[i].name==search_name)
            return 1;
        }
        return 0;
    }
};
class Parttime:public Employee
{
    protected:
    int no_of_working_hours,hourly_rate,salary;
    public:
    void accept1()
    {
        cout<<"ENTER NO OF WORKING HOURS:";
        cin>>no_of_working_hours;
        cout<<"ENTER HOURS RATE:";
        cin>>hourly_rate;
    }
      void calculate_salary()
    {
        salary=no_of_working_hours*hourly_rate;
    }
    void display1()
    {
        cout<<endl<<"NUMBER OF WORKING HOURS:"<<no_of_working_hours;
        cout<<endl<<"HOURLY RATE:"<<hourly_rate;
        cout<<endl<<"SALARY:"<<salary<<endl;
    }
    int search(Parttime ob2[],int part_time_limit,string search_name)
    {
        for(int i=0;i<part_time_limit;i++)
        {
            if(ob2[i].name==search_name)
            return 1;
        }
        return 0;

    }
};

int main()
{
    Fulltime ob1[100];
    Parttime ob2[100];
    int choice,part_time_limit,full_time_limit;
    string search_name;
    do
    {
    cout<<endl<<"1:ACCEPT DETAILS OF N EMP & CALCULATE THE SALARY:"<<endl<<"2:DISPLAY DETAILS OF N EMP"<<endl<<"3:SEARCH A GIVEN EMPLOYEE";
    cout<<endl<<endl<<"ENTER YOUR CHOICE:";
    cin>>choice;
        switch(choice)
        {
            case 1: cout<<endl<<"ENTER LIMIT OF FULL TIME EMP:";
                    cin>>full_time_limit; 
                    cout<<endl<<"ENTER DETAILS OF FULL TIME EMPLOYEE:";
                    for(int i=0;i<full_time_limit;i++)
                    {
                        ob1[i].accept();
                        ob1[i].accept1();
                        ob1[i].calculate_salary();
                    }
                    cout<<endl<<"ENTER LIMIT OF PART TIME EMP:";
                    cin>>part_time_limit; 
                    cout<<endl<<"ENTER DETAILS OF PART TIME EMPLOYEE:";
                    for(int i=0;i<part_time_limit;i++)
                    {
                        ob2[i].accept();
                        ob2[i].accept1();
                        ob2[i].calculate_salary();
                    }
                    break;
            case 2: cout<<endl<<"DETAILS OF FULL TIME EMPLOYEE:";
                    for(int i=0;i<full_time_limit;i++)
                    {
                        ob1[i].display();
                        ob1[i].display1();
                    }  
                    cout<<endl<<"DETAILS OF PART TIME EMPLOYEE:";
                    for(int i=0;i<full_time_limit;i++)
                    {
                        ob2[i].display();
                        ob2[i].display1();
                    } 
                    break;
            case 3:   
                    cout<<"ENTER EMP NAME TO SEARCH:";
                    cin>>search_name;
                    for(int i=0;i<full_time_limit;i++)
                    {
                        if(ob1[i].search(ob1,full_time_limit,search_name))
                        {
                            cout<<endl<<"EMPLOYEE IS FOUND";
                        }
                        else if(ob2[i].search(ob2,part_time_limit,search_name))
                        {
                            cout<<endl<<"EMPLOYEE IS FOUND";
                        }
                        else
                        {
                            cout<<"EMPLOYEE IS NOT FOUND";
                        }
                    }
                    break;
            default:cout<<"INVALID CHOICE";
                    
        }
    }while(choice>=1&&choice<=3);
}
