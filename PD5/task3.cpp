#include <iostream>
#include <string>
using namespace std;
double pyramidVolume(double length, double width, double height, string unit) 
{
    double result = (length * width * height) / 3.0;
    double factor = 1.0;
    if (unit == "millimeters")  
    {
        factor = 1000 * 1000 * 1000;   
    }  
    else if (unit == "centimeters")  
    {
        factor = 100 * 100 * 100;    
    }  
    else if (unit == "meters")  
    {
        factor = 1.0;            
    }  
    else if (unit == "kilometers")  
    {
        factor = 0.001 * 0.001 * 0.001;  
    }  
    else  
    {
        cout << "Invalid unit" << endl;
    }
    return result * factor;
}
int main() 
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
    double result = pyramidVolume(length, width, height, unit);
     cout << "The Volume of the pyramid is: " << result << " cubic " << unit << endl;
}

