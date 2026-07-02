// Take 3 number input and tell if they can be the sides of a triangle .

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter sides of triangles: ";
    cin >> a >> b >> c;
    // sum of any two sides > third side = valid triangle
    if (a + b > c && b + c > a && a + c > b)
        cout << "Valid Triangle";
    else
        cout << "InValid Triangle";
    return 0;
}