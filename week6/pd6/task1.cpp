#include<iostream>
using namespace std;
string decideactivity(string temp,string humidity)
{
    if (temp == "warm" && humidity == "dry")
    {
        cout<<"play tennis";
    } 
    else if (temp == "warm" && humidity == "humid")
    {
        cout<<"swim";
    }
    else if (temp == "cold" && humidity == "dry")
    {
        cout<<"play basketball";
    }
    else if (temp == "cold" && humidity == "humid")
    {
        cout<<"watch tv";
    }
    else
    {
        cout<<"Invalid";
    }
}
main()
{
    string temp;
    string humidity;
    cout<<"Enter the temoerature (warm / cold):";
    cin>>temp;
    cout<<"Enter the humidity (dry or humid):";
    cin>>humidity;
    string result = decideactivity(temp,humidity);
    cout<<"Recommended activity:"<<result;
}
