// Take a positive integer input and tell if it is a three digit number or not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a 3 digit numeric: ";
    cin >> n;
    if (n >= 100 && n <= 999)
        cout << n << " is a three digit number";
    else
        cout << "Not a 3 digit number ";
    return 0;
}