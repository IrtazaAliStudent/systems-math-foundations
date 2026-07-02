// Take 3 positive integers input and print the greatest of them.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers to print the greatest: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " is greatest";
    else if (b > c)
        cout << b << " is greatest";
    else
        cout << c << " is greatest";
    return 0;
}