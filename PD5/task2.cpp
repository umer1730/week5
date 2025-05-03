#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;
string pyramidvolume(double length, double width, double height, string unit)
{
    double volumeInCubicMeters = (length * width * height) / 3.0;
    double factor = 1.0;
    if (unit == "millimeters") 
    {
        factor = pow(1000, 3);  
    } 
    else if (unit == "centimeters") 
    {
        factor = pow(100, 3);   
    } 
    else if (unit == "meters") 
    {
        factor = 1.0;           
    } 
    else if (unit == "kilometers") 
    {
        factor = pow(0.001, 3); 
    } 
    else 
    {
        cout<<"Invalid unit";
    }
    double convertedVolume = volumeInCubicMeters * factor;
    ostringstream result;
    result << fixed << setprecision(3) << convertedVolume << " cubic " << unit;
    return result.str();
}
main()
{
    double length, width, height;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    string result = pyramidvolume(length, width, height, unit);
    cout << "The Volume of the pyramid is:"<< result << endl;
    return 0;
}

