#include<iostream>
#include<cmath>
using namespace std;
double calculationvolleyballgames(string yeartype, int holidays, int hometownweekends) {
    int totaalweekends = 48;
    int weekendsinsofia = totaalweekends - hometownweekends;
    double playweekends = weekendsinsofia * (3.0 / 4.0);
    double playholidays = holidays * (2.0 / 3.0);
    int playhometown = hometownweekends;
    double totalplays = playweekends + playholidays + playhometown;
    if (yeartype == "leap") 
    {
        totalplays = totalplays * 1.15;
    }
    return totalplays;
}
int main() 
{
    string yeartype;
    int holidays, hometownweekends;
    cout << "Enter year type (normal/leap): ";
    cin >> yeartype;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of hometown weekends: ";
    cin >> hometownweekends;
    int result = calculationvolleyballgames(yeartype, holidays, hometownweekends);
    cout << "Total number of volleyball games: " << result << endl;
    return 0;
}