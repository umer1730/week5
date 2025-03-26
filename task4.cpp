#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float number1,number2;
    cout<<"Enter first number:";
    cin>>number1;
    cout<<"Enter second number:";
    cin>>number2;
    float minimum = min(number1,number2);
    cout<<"The minimum of" <<number1 <<"and" <<number2 <<"is:"<<minimum<<endl;
}