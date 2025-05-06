#include <iostream>
using namespace std;
double perimeter(string shape, float value) 
{
    double perim = 0.0;
    if (shape == "s") 
    {
        perim = 4 * value; 
    }
    else if (shape == "c") 
    {
        perim = 6.28 * value; 
    }
    else if (shape == "t") 
    {
        perim = 3 * value; 
    }
    else if (shape == "h") 
    {
        perim = 6 * value; 
    }
    else 
    {
        cout << "Invalid shape character entered." << endl;
    }
    return perim;
}
int main() 
{
    string shape;
    float value;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value (side or radius): ";
    cin >> value;
    double result = perimeter(shape, value);
    cout << "The perimeter is: " << result << endl;
    return 0;
}

