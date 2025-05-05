#include<iostream>
#include<string>
using namespace std;
string passorfail(int marks)
{
    string result;
    if (marks > 50)
    {
        result = "You are passed with" + to_string(marks) + "marks";
    }
    if (marks <= 50)
    {
        result = "Ypu are failed with" + to_string(marks)+"marks";
    }
    return result;
}
main()
{
    int score;
    cout<<"Enter your score:";
    cin>>score;
    cout<<passorfail(score);
}