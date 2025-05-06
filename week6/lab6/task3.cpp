#include<iostream>
using namespace std;
void greaternumber(int a,int b)
{
    if (a > b)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
main()
{
    int a,b;
    cout<<"Enter num1:";
    cin>>a;
    cout<<"Enter num2:";
    cin>>b;
    greaternumber(a,b);
}
