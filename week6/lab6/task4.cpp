#include<iostream>
using namespace std;
void parityAnalysis(int num)
{
    int sum = 0, temp = num;   
    while (temp > 0) 
    {
        sum += temp % 10;  
        temp /= 10;         
    }
    if ((num % 2 == sum % 2)) {
        cout << "true";  
    } else {
        cout << "false";  
    }
}
int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    parityAnalysis(num);
}

