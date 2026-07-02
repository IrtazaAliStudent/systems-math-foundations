// Take a positive integer input and tell if it is divisible by 5 and 3.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a numeric: ";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
        cout << n << " is divisble by 5 and 3";
    else
        cout << "Not divisble by 5 and 3";
    return 0;
}