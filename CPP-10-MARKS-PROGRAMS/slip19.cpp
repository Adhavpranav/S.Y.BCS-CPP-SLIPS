/*
Write a C++ program to accept and display Bank Account details as Acc_No, 
Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of some amount 
and display modified bank account details. (Use manipulators).
*/
#include<iostream>
#include<iomanip>
using namespace std;
int Acc_No,Balance,deposit_value;
string Acc_holder_name,Addr,Contact_Number;
void accept()
{
    cout<<"ENTER ACCOUNT NUMBER:";
    cin>>Acc_No;
    cout<<"ENTER ACCOUNT HOLDER NAME:";
    cin>>Acc_holder_name;
    cout<<"ENTER ACCOUNT HOLDER ADDRESS:";
    cin>>Addr;
    cout<<"ENTER ACCOUNT HOLDER MOBILE NUM:";
    cin>>Contact_Number;
    cout<<"ENTER ACCOUNT BALANCE:";
    cin>>Balance;
}

void display() 
{
    cout << endl << setw(30) << left << "ACCOUNT NUMBER: " << Acc_No;
    cout << endl << setw(30) << left << "ACCOUNT HOLDER NAME: " << Acc_holder_name;
    cout << endl << setw(30) << left << "ACCOUNT HOLDER ADDRESS: " << Addr;
    cout << endl << setw(30) << left << "ACCOUNT HOLDER MOBILE NUMBER: " << Contact_Number;
    cout << endl << setw(30) << left << "ACCOUNT BALANCE: " << Balance << endl;
}


void deposit()
{
    cout<<endl<<"ENTER DEPOSIT AMOUNT:";
    cin>>deposit_value;
    Balance=Balance+deposit_value;
}
int main()
{
    accept();
    display();
    deposit();
    display();
    return 0;
}
