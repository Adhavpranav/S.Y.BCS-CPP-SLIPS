
/*
 Design a base class product (Product_Id,Product_Name,Price).Derive a class Discount 
(Discount_In_Percentage) from Product. A customer buys ‘n’ product. Write a C++   
program to calculate total price, total discount.  
*/
#include<iostream>
using namespace std;
class Product
{
    protected:
    int product_id;
    string product_name;
    int price;
    public:
    void accept_product_details()
    {
        cout<<endl<<"ENTER PRODUCT ID:";
        cin>>product_id;
        cout<<"ENTER PRODUCT NAME:";
        cin>>product_name;
        cout<<"ENTER PRODUCT PRICE:";
        cin>>price;
    }
    void display_product_details()
    {
        cout<<endl<<"PRODUCT ID:"<<product_id;
        cout<<endl<<"PRODUCT NAME:"<<product_name;
        cout<<endl<<"PRODUCT PRICE:"<<price;
    }
};
class Discount:public Product
{
    private:
    float discount_in_persentage;
    float total_discount=0;
    float discount_amount_per_product=0;

    int total_price=0;
    public:
    void accept_discount_details()
    {
        cout<<"ENTER DISCOUNT IN PERSENTAGE:";
        cin>>discount_in_persentage;
    }
    void discount_on_product()
    {
        discount_amount_per_product=price*(discount_in_persentage/100);
        price=price-discount_amount_per_product;
    }
    void total_p_and_dis(Discount obj[],int limit)
    {
        for(int i=0;i<limit;i++)
        {
        total_price=total_price+obj[i].price;
        total_discount=total_discount+obj[i].discount_amount_per_product;
        }
        cout<<endl<<"TOTAL PRICE IS:"<<total_price;
        cout<<endl<<"TOTAL DISCOUNT YOU GOT:"<<total_discount;
    }
};

int main()
{
    Discount obj[100],obj1;
    int limit;
    cout<<"ENTER LIMIT:";
    cin>>limit;
        for(int i=0;i<limit;i++)
        {
        obj[i].accept_product_details();
        obj[i].accept_discount_details();
        obj[i].discount_on_product();
        }
        obj1.total_p_and_dis(obj,limit);
        return 0;
}
