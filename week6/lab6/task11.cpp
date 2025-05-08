#include<iostream>
using namespace std;
int discount(string day,string month,int amount)
{
    float payable;
    if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        payable = amount - (amount * 10) / 100;
    }
    else
    {
        payable = amount;
    }
   return payable;
}
int main()
{
    string day,month;
    int amount;
    cout<<"Enter the purchase day:";
    cin>>day;
    cout<<"Enter the purchase month:";
    cin>>month;
    cout<<"Enter the purchase amount:";
    cin>>amount;
    float payable = discount(day,month,amount);
    cout<<"Payable amount after discount:"<<payable;
}