/*
 Write a C++ program to create a class ‘MyMatrix’ which contains two-dimensional 
integer array of size mXn. Write a member function to display sum of all elements of 
entered matrix. (Use Dynamic Constructor for allocating memory and Destructor to free 
memory of an object).         
*/
#include<iostream>
using namespace std;
class MyMatrix
{
    int **arr,row,col;
    public:
    MyMatrix(int row,int col)
    {
        arr=new int*[row];
        for(int i=0;i<row;i++)
        {
            arr[i]=new int[col];
        }
        this->col=col;
        this->row=row;
        cout<<"ENTER ELEMENTS OF AN ARRAY:";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
            cin>>arr[i][j];
            }
        }
    }
    int addition()
    {
        int sum=0;
         for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                sum=sum+arr[i][j];
            }
        }
        return sum;
    }
    ~MyMatrix()
    {
         for (int i = 0; i < row; i++) 
         {
            delete[] arr[i];  
        }
        delete[] arr;
    }
};

int main()
{
    int row,col;
    cout<<"ENTER A NUMBER OF ROWS AND COLS:";
    cin>>row>>col;
    MyMatrix ob(row,col);
    cout<<"ADDITION IS:"<<ob.addition();
}
