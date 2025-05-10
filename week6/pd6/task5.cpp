#include<iostream>
using namespace std;
float calculatefruitprice(string fruit, string dayofweek, double quantity) 
{
    float price = -1; 
    if (dayofweek == "Monday" || dayofweek == "Tuesday" || dayofweek == "Wednesday" ||
        dayofweek == "Thursday" || dayofweek == "Friday") 
        {
        if (fruit == "banana") 
        price = 2.50;
        else if (fruit == "apple")
        price = 1.20;
        else if (fruit == "orange") 
        price = 0.85;
        else if (fruit == "grapefruit") 
        price = 1.45;
        else if (fruit == "kiwi") 
        price = 2.70;
        else if (fruit == "pineapple") 
        price = 5.50;
        else if (fruit == "grapes") 
        price = 3.85;
    }
    else if (dayofweek == "Saturday" || dayofweek == "Sunday") 
    {
        if (fruit == "banana") 
        price = 2.70;
        else if (fruit == "apple") 
        price = 1.25;
        else if (fruit == "orange") 
        price = 0.90;
        else if (fruit == "grapefruit") 
        price = 1.60;
        else if (fruit == "kiwi") 
        price = 3.00;
        else if (fruit == "pineapple") 
        price = 5.60;
        else if (fruit == "grapes") 
        price = 4.20;
    }
    if (price != -1) 
    {
        return price * quantity; 
    } 
    else 
    {
        cout << "error" << endl;
        return -1; 
    }
}
int main() 
{
    string fruit, dayofweek;
    double quantity; 
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Tuesday): ";
    cin >> dayofweek;
    cout << "Enter the quantity: ";
    cin >> quantity; 
    float result = calculatefruitprice(fruit, dayofweek, quantity);
    if (result != -1) 
    {
        cout << "Result: " << result << endl;
    } 
    return 0;
}