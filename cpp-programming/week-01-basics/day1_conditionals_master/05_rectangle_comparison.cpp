// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main()
{
    float lr, br, ar, pr;
    cout << "Enter length of Rectangle: ";
    cin >> lr;
    cout << "Enter breadth of Rectangle: ";
    cin >> br;
    ar = lr * br;
    pr = 2 * (lr + br);
    if (ar > pr)
        cout << "Area of the rectangle > its perimeter";
    else
        cout << "Area of Rectangle < its Perimeter";
    return 0;
}