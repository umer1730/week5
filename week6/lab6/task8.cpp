#include<iostream>
using namespace std;
int assigngrade(int marks)
{
    char grade;
    if(marks < 50)
    {
        grade = 'F';
    }
    if(marks >= 50 && marks <= 60)
    {
        grade = 'E';
    }
    if(marks >= 60 && marks <= 70)
    {
        grade = 'D';
    }
    if(marks >= 70 && marks <= 80)
    {
        grade = 'C';
    }
    if(marks >= 80 && marks <= 85)
    {
        grade = 'B';
    }
    if(marks > 85)
    {
        grade = 'A';
    }
    return grade;
}
int main()
{
    int marks;
cout<<"Enter the marks:";
cin>>marks;
char grade = assigngrade(marks);
cout<<"Grade:"<<grade;
}