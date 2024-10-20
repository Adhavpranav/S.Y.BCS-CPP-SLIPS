/*
Design a Base class Customer (name, phone-number). Derive a class Depositor (accno, 
balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from 
Depositor. Write necessary member functions to read and display the details of ‘n’ 
customers.  
*/
#include<iostream>
using namespace std;
class Customer
{
    protected:
        string name;
        int phone_number;
    public:
            void accept()
            {
                cout<<"ENTER A CUSTOMER NAME:";
                cin>>name;
                cout<<"ENTER A CUST PHONE NUM:";
                cin>>phone_number;
            }
};
class Depositor:public Customer
{
    protected:
            int accno,balance;
    public:
            void accept()
            {
                cout<<"ENTER A ACCOUNT NUMBER:";
                cin>>accno;
                cout<<"ENTER A BALANCE:";
                cin>>balance;
            }
};
class Borrower:public Depositor
{
    protected:
            int loan_no,loan_amt;
    public:
        void accept()
        {
            Customer::accept();
            Depositor::accept();
            cout<<"ENTER A LOAN_NUMBER:";
            cin>>loan_no;
            cout<<"ENTER A LOAN_AMOUNT:";
            cin>>loan_amt;

        }
        void disp()
        {
            cout<<endl<<"CUSTOMER NAME:"<<name;
            cout<<endl<<"CUSTOMER PHONE NUMBER:"<<phone_number;
            cout<<endl<<"ACCOUNT NUMBER:"<<accno;
            cout<<endl<<"ACCOUNT BALANCE:"<<balance;
            cout<<endl<<"CUSTOMER LOAN NO::"<<loan_no;
            cout<<endl<<"CUSTOMER LOAN AMOUNT:"<<loan_amt;
            cout<<endl;
        }
};

int main()
{
     Borrower ob1[10];
     int limit;
     cout<<"ENTER A LIMIT:";
     cin>>limit;
     for(int i=0;i<limit;i++)
     {
        ob1[i].accept();
     }
     for(int i=0;i<limit;i++)
     {
        ob1[i].disp();
     }
}
