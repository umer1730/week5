#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays) {
    double studioPricePerNight = 0.0;
    double apartmentPricePerNight = 0.0;
    if (month == "May" || month == "October") {
        studioPricePerNight = 50.0;
        apartmentPricePerNight = 65.0;
    } else if (month == "June" || month == "September") 
    {
        studioPricePerNight = 75.20;
        apartmentPricePerNight = 68.70;
    } 
    else if (month == "July" || month == "August") 
    {
        studioPricePerNight = 76.0;
        apartmentPricePerNight = 77.0;
    }
    double studioPrice = studioPricePerNight * numberOfStays;
    double apartmentPrice = apartmentPricePerNight * numberOfStays;
    if (month == "May" || month == "October") 
    {
        if (numberOfStays > 7 && numberOfStays <= 14) 
        {
            studioPrice *= 0.95; 
        } 
        else if (numberOfStays > 14) 
        {
            studioPrice *= 0.70; 
        }
    } 
    else if ((month == "June" || month == "September") && numberOfStays > 14) {
        studioPrice *= 0.80; 
    }
    if (numberOfStays > 14) 
    {
        apartmentPrice *= 0.90; 
    }
    return "Apartment: " + to_string(apartmentPrice) + "$.\nStudio: " + to_string(studioPrice) + "$.";
}
int main() 
{
    string month;
    int numberOfStays;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> numberOfStays;
    cout << calculateHotelPrices(month, numberOfStays) << endl;
    return 0;
}