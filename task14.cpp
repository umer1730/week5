#include <iostream>
#include <string>
using namespace std; 
string numberToWords(int num)
{
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
    if (num < 1 || num > 99) {
        cout<<"out of range";
    }
    if (num < 10) 
    {
        cout<<ones[num];
    } else if (num < 20) {
        cout<<teens[num - 10];
    } else {
        int tenPart = num / 10;
        int onePart = num % 10;
        if (onePart == 0) {
            cout<<tens[tenPart];
        } else {
            cout<<tens[tenPart] + "-" + ones[onePart];
        }
    }
}
int main() {
    int num; 
    cout << "Enter a number (1-99): ";
    cin >> num;
    cout << "In words: " << numberToWords(num) << endl;
    return 0;
}