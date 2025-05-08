#include<iostream>
using namespace std;
int findgreatest(int a,int b,int c)
{
    if (a > b && a > c )
    {
        cout<<a;
    }
    else if (a < b && b > c)
    {
        cout<<b;
    }
    else if (a < c && b < c)
    {
        cout<<c;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    cout<<"The greatest number among"<<a<<","<<b<<" "<<"and"<<" "<<c<<" "<<"is:";
    int result = findgreatest(a,b,c);
}