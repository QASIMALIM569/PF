#include <iostream>
using namespace std;

int main()
{
    float bill, discount, finalBill;

    cout << "Enter your bill: ";
    cin >> bill;

    if (bill <= 5000)
    {
        discount = bill * 0.05;
    }
    else
    {
        discount = bill * 0.10;
    }

    finalBill = bill - discount;

    cout << "Your discounted bill is: " << finalBill;

}