// Take positive integer input and tell if its Divisible by 5 or not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n % 5 == 0)
        cout << "Divisble By 5!";
    else
        cout << "Not Divisble By 5!";
    return 0;
}