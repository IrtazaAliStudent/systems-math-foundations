// Licensing System: Calculate total cost based on license quantity, bulk discounts, and membership status while validating order limits.

#include <iostream>
using namespace std;
int main()
{
    int nosl;
    int choice; // 1 for Premium and 0 for Standard heheh.
    cout << "Enter Number of Software Licenses: ";
    cin >> nosl;
if(nosl >= 100 || nosl < 1){
    cout<<"Invalid Order";
    }
else{
    cout << "Enter Membership Status(1 for Premium, 0 for Standard): ";
    cin >> choice;
    int Total_Cost = nosl * 100;
    if (choice == 0)
    {
        cout << "====Standard Member====" << endl;
        cout << "Total Cost: " << Total_Cost << endl;

        if (nosl >= 10)
        {
            cout << "Extra Discount for 10+ License: " << "10%" << endl;
            Total_Cost = Total_Cost - (0.1* Total_Cost);
            cout << "Total Cost is: " << Total_Cost << endl;
        }

        else
        {
            cout << "Total Cost is: " << Total_Cost << endl;
        }
    }
    // Base price each license: $100.
    // Discount= 10% only if they buy 10 or more licenses.
    // if Premium then extra 5% discount.
    // cannot buy 100 license at once and cant order 0 or negative licenses
    // if they try to buy 0 or negative then "Invalid Order"
    else if (choice == 1)
    {
        cout << "====Premium Member====" << endl;

        if (nosl >= 10)
        {
            cout << "Discount for 10+ License: " << "10%" << endl;
            Total_Cost = Total_Cost - (0.1 * Total_Cost);
            cout << "Total Cost is: " << Total_Cost << endl;
        }

        else
            cout << "Total Cost is: " << Total_Cost << endl;

        Total_Cost = Total_Cost - (0.05 * Total_Cost);
        cout << "Extra Discount: " << "5%" << endl;
        cout << "Total Cost is: " << Total_Cost << endl;
    }

    else
        cout << "Invalid Choice!";
}
    return 0;

}
