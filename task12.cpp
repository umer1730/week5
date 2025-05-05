#include<iostream>
using namespace std;
string oddishOrEvenish(int num) 
{
    int sum;
    {
        sum = (sum + num) % 10;
        num = num / 10;
    if (sum%2 == 0)
        {
            cout<<"Evenish"<<endl;
        }  
    else
      {
        cout<<"Oddish"<<endl;
      }
}
}
int main() 
{
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;
    string result = oddishOrEvenish(num);
    cout << result << endl;
    return 0;
}