// Take 3 positive integers input and print the least of them.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers to print the smallest: ";
    cin >> a >> b >> c;
    if (a <= b && a <= c)
        cout << a << " is smallest";
    else if (b < c)
        cout << b << " is smallest";
    else
        cout << c << " is smallest";
    return 0;
}