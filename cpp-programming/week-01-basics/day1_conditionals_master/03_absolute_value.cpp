// Take integer input and Print the Absolute Value of that integer.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n < 0)
        cout << "Absolute Value is: " << n * -1;
    else
        cout << "Absolute Value is: " << n;
    return 0;
}