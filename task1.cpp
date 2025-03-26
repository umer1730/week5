#include<iostream>
using namespace std;
int calculateprice(string product,string city,int quantity)
{
    int price;
    if (product == "coffee" && city == "Lahore")
    price = quantity * 400;
else if (product == "coffee" && city == "Faisalabad")
    price = quantity * 350;
else if (product == "sweets" && city == "Lahore")
    price = quantity * 200;
else if (product == "sweets" && city == "Faisalabad")
    price = quantity * 250;
else if (product == "water" && city == "Lahore")
    price = quantity * 50;
else if (product == "water" && city == "Faisalabad")
    price = quantity * 40;
else if ((product == "coffee" || product == "sweets") && city == "Karachi")
    price = quantity * 300;
else if (product == "water" && city == "Karachi")
    price = quantity * 60;
return price;
}
main()
{
    string product,city;
    int quantity,price;
    cout<<"Product is:";
    cin>>product;
    cout<<"Branch name:";
    cin>>city;
    cout<<"Quantity is:";
    cin>>quantity;
    price = calculateprice(product,city,quantity);
    cout<<"Calculateprice is:"<<price;
}