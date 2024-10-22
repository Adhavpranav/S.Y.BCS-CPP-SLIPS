/*
 Write a C++ program to calculate the average height of all the students of a class. The 
number of students and their heights are entered by user. (Use array of objects).
*/

#include<iostream>
using namespace std;
class student
{
    float height;
    public:
    void accept()
    {
        cout<<"ENTER HEIGHT OF A STUDENT:";
        cin>>height;
    }
    void average_height(student obj[],int limit)
    {
        float total_height=0,avg_height;
        for(int i=0;i<limit;i++)
        {
            total_height=total_height+obj[i].height;
        }
        avg_height=(total_height/limit);
        cout<<endl<<"AVERAGE HEIGHT OF A STUDENT IS:"<<avg_height;
    }
};
int main()
{
    int limit;
    student obj[100],ob1;
    cout<<"ENTER A LIMIT:";
    cin>>limit;
    for(int i=0;i<limit;i++)
    {
        obj[i].accept();
    }
    ob1.average_height(obj,limit);
    return 0;
}
