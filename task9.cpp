#include<iostream>
using namespace std;
int fun(int number);
int main()
{
    int number,result;
    cout<<"Enter the number:";
    cin>>number;
    result = fun(number);
    return 0;
}
int fun(int number)
{
    int total = number * 5;
    return total;
}