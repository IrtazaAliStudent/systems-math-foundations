// Check if three points (x1,y1), (x2,y2), and (x3,y3) are collinear.

#include <iostream>
using namespace std;
int main()
{
    int a1, a2, b1, b2, c1, c2;
    float mAB, mBC;
    cout << "Give  point A = (x1,y1): ";
    cin >> a1 >> a2;
    cout << "Give  point B = (x2,y2): ";
    cin >> b1 >> b2;
    cout << "Give  point C = (x3,y3): ";
    cin >> c1 >> c2;

    mAB = (b2 - a2) * (c1 - b1);
    mBC = (c2 - b2) * (b1 - a1);

    if (mAB == mBC)
    {
        cout << "Points are Collinear!";
    }
    else
    {
        cout << "Points are not Collinear!";
    }
}
