#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a, b, c, determinant, root1, root2, realPart, imaginaryPart;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    determinant = b * b - 4 * a * c;
    if (determinant > 0) 
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Solutions: x = " << root1 << " and x = " << root2 << endl;
    }
    else if (determinant == 0) 
    {
        root1 = -b / (2 * a);
        cout << "Solution: x = " << root1 << endl;
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "Complex Solutions: x = " << realPart << " + " << imaginaryPart << "i and x = " 
             << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}