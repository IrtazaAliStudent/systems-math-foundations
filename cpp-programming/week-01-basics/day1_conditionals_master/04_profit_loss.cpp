// If cost price and selling price of an item is input through keyboard, write a program to determine whether how much the seller has made profit or loss or no profit no loss.

#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter Cost Price: ";
    cin >> cp;
    int sp;
    cout << "Enter Selling Price: ";
    cin >> sp;
    if (sp > cp)
        cout << "Profit is: " << sp - cp << "rp";
    else if (sp < cp)
        cout << "Loss is: " << cp - sp << "rp";
    else
        cout << "No Profit No Loss";
    return 0;
}