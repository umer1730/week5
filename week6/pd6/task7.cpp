#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) 
{
    int examTimeInMinutes = examHour * 60 + examMinute;
    int studentTimeInMinutes = studentHour * 60 + studentMinute;
    int timeDifference = studentTimeInMinutes - examTimeInMinutes;
    string result;
    if (timeDifference == 0) 
    {
        result = "On time";
    } 
    else if (timeDifference > 0) 
    {
        result = "Late";
        int hoursLate = timeDifference / 60;
        int minutesLate = timeDifference % 60;
        if (hoursLate > 0) 
        {
            result += "\n" + to_string(hoursLate) + ":" + (minutesLate < 10 ? "0" : "") + to_string(minutesLate) + " hours after the start";
        } 
        else 
        {
            result += "\n" + to_string(minutesLate) + " minutes after the start";
        }
    } 
    else 
    { 
        result = "Early";
        timeDifference = -timeDifference; 
        int hoursEarly = timeDifference / 60;
        int minutesEarly = timeDifference % 60;
        if (hoursEarly > 0) 
        {
            result += "\n" + to_string(hoursEarly) + ":" + (minutesEarly < 10 ? "0" : "") + to_string(minutesEarly) + " hours before the start";
        } 
        else 
        {
            result += "\n" + to_string(minutesEarly) + " minutes before the start";
        }
    }
    return result;
}
int main() 
{
    int examHour, examMinute, studentHour, studentMinute;
    cout << "Enter exam starting time (hour): ";
    cin >> examHour;
    cout << "Enter exam starting time (minutes): ";
    cin >> examMinute;
    cout << "Enter student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter student minutes of arrival: ";
    cin >> studentMinute;
    string status = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << status << endl;
    return 0;
}