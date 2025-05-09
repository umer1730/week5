#include<iostream>
using namespace std;
string calculatecost(float budget,string category,int numpeople)
{  
    float ticketprice;
    if (category == "vip")
     {
        ticketprice = 499.99;
     }
    else if (category == "normal")
    {
        ticketprice = 249.99;
    }
    else 
    {
        cout<<"Invalid";
    }
    double transport;
    if (numpeople >= 1 && numpeople <= 4)
    {
        transport = budget * 0.75;
    }
    else if (numpeople >= 5 && numpeople <= 9)
    {
        transport = budget * 0.60;
    }
    else if (numpeople >= 10 && numpeople <= 24)
    {
        transport = budget * 0.50;
    }
    else if (numpeople >= 25 && numpeople <= 49)
    {
        transport = budget * 0.40;
    }
    else if (numpeople >= 50)
    {
        transport = budget * 0.25; 
    }
    else 
    {
        cout<<"Invalid people";
    }
    double remainingbudget = budget - transport;
    double totalticketcost = numpeople * ticketprice;
    if (remainingbudget >= totalticketcost)
    {
        double moneyleft = remainingbudget - totalticketcost;
        cout<<"Yes!You have "<<moneyleft<<"leva left"<<endl;
    }
    else
    {
        double moneyneeded = totalticketcost - remainingbudget;
        cout<<"Not enough money!You need "<<moneyneeded<<" leva left"<<endl;
    }
}
main()
{
    float budget;
    string category;
    int numpeople;
    cout<<"Enter the budget:";
    cin>>budget;
    cout<<"Enter the category (vip / normal):";
    cin>>category;
    cout<<"Enter the number of people in group:";
    cin>>numpeople;
    string result = calculatecost(budget,category,numpeople);
    cout<<result;
}
