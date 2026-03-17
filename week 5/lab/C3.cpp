#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    int lcm = (a * b) / gcd;
    
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    
}