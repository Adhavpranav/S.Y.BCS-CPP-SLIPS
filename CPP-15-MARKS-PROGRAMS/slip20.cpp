/*
Write a C++ program using class to accept and display ‘n’ Products information, also display 
information of a product having maximum price. (Use array of objects and dynamic memory 
allocation)
*/
#include<iostream>
using namespace std;
class product
{
    private:
    int pr_no,price;
    string pr_name;
    public:
    void accept()
    {
        cout<<endl<<"ENTER PRODUCT NUMBER:";
        cin>>pr_no;
        cout<<"ENTER PRODUCT NAME:";
        cin>>pr_name;
        cout<<"ENTER PRODUCT PRICE:";
        cin>>price;
    }
    void display()
    {
        cout<<endl<<"PRODUCT NUMBER:"<<pr_no;
        cout<<endl<<"PRODUCT NAME:"<<pr_name;
        cout<<endl<<"PRODUCT PRICE:"<<price;
    }
    static void max_price(product *obj,int limit)
    {
        int max,index=0;
        max=obj[0].price;
        for(int i=1;i<limit;i++)
        {
            if(obj[i].price>max)
            {
                max=obj[i].price;
                index=i;
            }
        }
        obj[index].display();
    }
};

int main()
{
   
    int limit;
    cout<<"ENTER LIMIT:";
    cin>>limit;
    product *obj=new product[limit];
    cout<<endl<<"ENTER PRODUCT DETAILS:";
    for(int i=0;i<limit;i++)
    {
        obj[i].accept();
    }
    cout<<endl<<"PRODUCTS DETAILS:";
    for(int i=0;i<limit;i++)
    {
        obj[i].display();
    }
    cout<<endl<<"MAX PRODUCT DETAILS:";
    product::max_price(obj,limit);
    delete [] obj;
    return 0;
}
