// Take percentage as an input and convert them to grade.

#include <iostream>
using namespace std;
int main()
{
    float p;
start:
    cout << "Enter student's Percentage to find Grade: ";
    cin >> p;
    if (p > 100)
    {
        cout << "Invalid Code..." << endl;
        goto start;
    }
    else if (p >= 85 && p <= 100)
    {
        cout << "Brilliant! A+";
    }
    else if (p >= 80)
    {
        cout << "Best! A-";
    }
    else if (p >= 75)
    {
        cout << "Better! B+";
    }
    else if (p >= 70)
    {
        cout << "Good! B";
    }
    else if (p >= 60)
    {
        cout << "Average! C";
    }
    else if (p >= 50)
    {
        cout << "Below Average! D";
    }
    else if (p >= 0 && p < 50)
    {
        cout << "Fail! F";
    }

    else
        cout << "Invalid Input";

    return 0;
}