/*
 Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy. 
Create and initialize the object by using parameterized constructor and display date in dd- 
mon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic 
initialization   of object).                      
*/
#include<iostream>
using namespace std;
class Mydate
{
    private:
    int day,month,year;
    string arr_month[12]={"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sep","Oct","Nov","Dec"};
    public:
    Mydate(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display()
    {
        cout<<"DATE IS:"<<" "<<day<<"-"<<arr_month[month-1]<<"-"<<year;
    }
};

int main()
{
    Mydate *obj=new Mydate(7,10,2005);
    obj->display();
    delete obj;
    return 0;
}
