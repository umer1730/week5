#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float number1,number2;
    cout<<"Enter the base number:";
    cin>>number1;
    cout<<"Enter the exponent:";
    cin>>number2;
    float power = pow(number1,number2);
    cout<<number1 << "raised to the power" << number2 <<"is:" <<power; 
}