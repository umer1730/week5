#include<iostream>
using namespace std;
string canbuydress(float dresscost,string brand);
int main()
{
    float dresscost;
    string brand;
    cout<<"Enter the dress cost:$";
    cin>>dresscost;
    cout<<"Enter the dess brand:";
    cin>>brand;
    cout<<canbuydress(dresscost,brand);
}
string canbuydress(float dresscost,string brand)
{
    if (dresscost < 1500 && brand == "MTJ")
    {
        return"congratulations!You can buy the dress.";
    }
        return"Sorry, the dress doesn't meet the criteria for purchase.";
}