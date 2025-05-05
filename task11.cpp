#include<iostream>
using namespace std;
int number(int digit);
main()
{
    int digit,a,b,c;
    cout<<"Enter a three-digit number:";
    cin>>digit;
    a = (digit / 100);
    b = (digit / 10) % 10;
    c = (digit % 10);
    if (digit == 'a+b+c')
    {
        cout<<"The number is symmetrical";
    }
    if (digit != 'a+b+c')
    {
        cout<<"The number is not symmetrical";
    }
}
