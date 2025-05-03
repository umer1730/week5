#include<iostream>
using namespace std;
string checkalphabetcase(char character);
int main()
{
    char character;
    cout<<"Enter a character(A / a):";
    cin>>character;
    if (character = 'A')
    {
    cout<<"You have entered capital"<<" "<<character;
    }
    if (character = 'a')
    {
    cout<<"You have entered small"<<" "<<character;
    }
}