//Take two cordinate points for x and y and tell in which Quadrant are they lieing and also tell if they are on origin.

#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter x and y coordinates to find the quadrants: ";
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "Points lie on Origin!";
    }
    else if ((x > 0 || x < 0) && y == 0)
    {
        cout << "Points lie on X axis!";
    }
    else if ((y > 0 || y < 0) && x == 0)
    {
        cout << "Points lie on Y axis!";
    }
    else if (x > 0 && y > 0)
    {
        cout << "Points lie in 1st Quadrant!";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Points lie in 2nd Quadrant!";
    }

    else if (x < 0 && y < 0)
    {
        cout << "Points lie in 3rd Quadrant!";
    }

    else
    {
        cout << "Points lie in 4th Quadrant!";
    }
}