#include<iostream>
#include<iomanip>
using namespace std;
string timetravel(int hours, int minutes)
 {
    minutes = minutes + 15;
    if (minutes >= 60)
    {
        minutes =minutes - 60;
        hours =hours + 1;
    }     
    if (hours >= 24)
    {
        hours =hours - 24;
    }     
    stringstream ss;
    ss << setw(2) << setfill('0') << hours << ":"<< setw(2) << setfill('0') << minutes;
    return ss.str(); 
}
 main() 
{
    int hours,minutes;
    cout << "Enter hours(0-23): ";
    cin >> hours;
    cout << "Enter minutes(0-59): ";
    cin >> minutes;
    string FT = timetravel(hours,minutes);
    cout  << FT << endl;
}