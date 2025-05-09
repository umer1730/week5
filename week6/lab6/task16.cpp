#include<iostream>
using namespace std;
float totalincome(string screening,int rows,int columns)
{   
    float num;
    if (screening == "premiere")
    {
        num = 12.00 * rows * columns;
    }
    else if (screening == "normal")
    {
        num = 7.50 * rows * columns;
    }
    else if (screening == "discount")
    {
        num = 5.00 *  rows * columns;
    }
     return num;
}
main()
{
    string screening;
    int rows,columns;
    cout<<"Enter the screening type:";
    cin>>screening;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>columns;
    float result = totalincome(screening,rows,columns);
    cout<<"Result is:"<<result;
}