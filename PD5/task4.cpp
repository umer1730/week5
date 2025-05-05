#include <iostream>
using namespace std;
float taxcalculator(char type, float price)
{
    float taxrate = 0;  
    if (type == 'M')
        taxrate = 6;
    else if (type == 'E')
        taxrate = 8;
    else if (type == 'S')
        taxrate = 10;
    else if (type == 'V')
        taxrate = 12;
    else if (type == 'T')
        taxrate = 15;
    else
    {
        cout << "Invalid type" << endl;
        return -1;  
    }
    float finalprice = price + (price * taxrate / 100);
    return finalprice;  
}
main()
{
    char type;
    float price;    
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;    
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    float result = taxcalculator(type, price);
    if (result != -1)
        cout << "The final price of the vehicle type " << type << " after adding the tax is: $" << result << endl;
    return 0;  
}
