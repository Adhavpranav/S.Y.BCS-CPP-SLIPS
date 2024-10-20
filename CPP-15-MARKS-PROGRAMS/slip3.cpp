/*
 Create a C++ class Employee with data members E_no, E_Name, Designation and Salary. 
Accept two employee’s information and display information of employee having maximum 
salary. (Use this pointer). 
*/

#include<iostream>
using namespace std;
class Employee
{
    private:
    int E_no;
    string E_Name,Designation;
    float Salary;
    public:
        void accept()
        {
            cout<<"ENTER E_NO:";
            cin>>E_no;
            cout<<"ENTER E_NAME:";
            cin>>E_Name;
            cout<<"ENTER DESIGNATION:";
            cin>>Designation;
            cout<<"ENTER SALARY:";
            cin>>Salary;
        }

        void max(Employee ob1)
        {
            if(ob1.Salary>Salary)
            {
            this->E_no=ob1.E_no;
            this->E_Name=ob1.E_Name;
            this->Designation=ob1.Designation;
            this->Salary=ob1.Salary;
            }
        }

        void display()
        {
            cout<<endl<<"EMP ENO:"<<E_no;
            cout<<endl<<"EMP NAME:"<<E_Name;
            cout<<endl<<"EMP DESIGNATION:"<<Designation;
            cout<<endl<<"EMP SALARY:"<<Salary;
        }
};

int main()
{
    Employee ob1,ob2;
    ob1.accept();
    ob2.accept();
    ob2.max(ob1);
    ob2.display();
    return 0;
}
