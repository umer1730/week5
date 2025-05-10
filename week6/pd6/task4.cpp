#include <iostream>
using namespace std;
int main() 
{
    char serviceCode;
    char timecall;
    cout << "Enter service code (r/R for Regular, p/P for Premium): ";
    cin >> serviceCode;
    cout<<"Enter time of the call:";
    cin>>timecall;
    if (serviceCode == 'r' || serviceCode == 'R') 
    {
        double totalBill = 10.00;
        int minutes;
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        if (minutes > 50) 
        {
            totalBill += (minutes - 50) * 0.20;
        }
        cout << "Service Type: Regular\n";
        cout << "Minutes Used: " << minutes << "\n";
        cout << "Total Bill: $" << totalBill << "\n";
    } 
    else if (serviceCode == 'p' || serviceCode == 'P') 
    {
        double totalBill = 25.00;
        int dayMinutes, nightMinutes;
        cout << "Enter the number of minutes used during the day: ";
        cin >> dayMinutes;
        cout << "Enter the number of minutes used during the night: ";
        cin >> nightMinutes;
        if (dayMinutes > 75) 
        {
            totalBill += (dayMinutes - 75) * 0.10;
        }
        if (nightMinutes > 100) 
        {
            totalBill += (nightMinutes - 100) * 0.05;
        }
        cout << "Service Type: Premium\n";
        cout << "Day Minutes Used: " << dayMinutes << "\n";
        cout << "Night Minutes Used: " << nightMinutes << "\n";
        cout << "Total Bill: $" << totalBill << "\n";
    } 
    else 
    {
        cout << "Error: Invalid service code entered.\n";
    }
    return 0;
}