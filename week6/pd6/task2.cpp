#include<iostream>
using namespace std;
float calculateAverage(float english, float math, float chemistry, float socialscience, float biology)
{
    if (english < 0 || english > 100 || math < 0 || math > 100 ||
        chemistry < 0 || chemistry > 100 || socialscience < 0 || socialscience > 100 ||
        biology < 0 || biology > 100) 
        {
        cout << "Invalid marks entered!" << endl;
    }
    return (english + math + chemistry + socialscience + biology) / 5;
}
string calculationGrade(float average) 
{
    if (average >= 90) return "A+";
    else if (average >= 80) return "A";
    else if (average >= 70) return "B+";
    else if (average >= 60) return "B";
    else if (average >= 50) return "C";
    else if (average >= 40) return "D";
    else return "F";
}
int main() 
{
    string name;
    float english, math, chemistry, socialscience, biology;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> english;
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Social Science: ";
    cin >> socialscience;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    float average = calculateAverage(english, math, chemistry, socialscience, biology);
    if (average == -1) return 1; 
    string grade = calculationGrade(average);
    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
