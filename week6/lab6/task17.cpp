#include <iostream>
using namespace std;
float lowestprice(int distance,string period)
{
    double taxicost ;
    if (period == "day")
    {
        taxicost = 0.70 + distance * 0.79;
    }
    else
    {
        taxicost = 0.70 + distance * 0.90;
    }
    double buscost = 1e9;
    if (distance >= 20)
    {
        buscost = distance * 0.09;
    }
    double traincost = 1e9;
    if (distance >= 100)
    {
        traincost = distance * 0.06;
    }
    return min(taxicost,min(buscost,traincost));
}
main()
{
    int distance;
    string period;
    cout<<"Enter the numbers of kilometers:";
    cin>>distance;
    cout<<"Enter the period of the day:";
    cin>>period;
    double result = lowestprice(distance,period);
    cout<<"Lowest price for"<<" "<<distance<<" "<<"Kilometers:"<<result<<" "<<"EUR";
}