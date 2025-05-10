#include<iostream>
using namespace std;
string findzodiacign(int day, string month) 
{
    if ((month == "march" && day >= 21) || (month == "april" && day <= 19))
        return "Aries - The Ram";
    else if ((month == "april" && day >= 20) || (month == "may" && day <= 20))
        return "Taurus - The Bull";
    else if ((month == "may" && day >= 21) || (month == "june" && day <= 20))
        return "Gemini - The Twins";
    else if ((month == "june" && day >= 21) || (month == "july" && day <= 22))
        return "Cancer - The Crab";
    else if ((month == "july" && day >= 23) || (month == "august" && day <= 22))
        return "Leo - The Lion";
    else if ((month == "august" && day >= 23) || (month == "september" && day <= 22))
        return "Virgo - The Virgin";
    else if ((month == "september" && day >= 23) || (month == "october" && day <= 22))
        return "Libra - The Scales";
    else if ((month == "october" && day >= 23) || (month == "november" && day <= 21))
        return "Scorpio - The Scorpion";
    else if ((month == "november" && day >= 22) || (month == "december" && day <= 21))
        return "Sagittarius - The Archer";
    else if ((month == "december" && day >= 22) || (month == "january" && day <= 19))
        return "Capricorn - The Goat";
        else if ((month == "january" && day >= 20) || (month == "february" && day <= 18))
        return "Aquarius - The Water Bearer";
    else if ((month == "february" && day >= 19) || (month == "march" && day <= 20))
        return "Pisces - The Fishes";
    else
        return "Invalid Date!";
}
int main() 
{
    int day;
    string month;
    cout << "Enter the day of birth:";
    cin >> day;
    cout << "Enter the Month of birth: ";
    cin >> month;
    string zodiacSign = findzodiacign(day, month);
    cout << "Your Zodiac sign is: " << zodiacSign << endl;
    return 0;
}
