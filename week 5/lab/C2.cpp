#include <iostream>
using namespace std;

int main() {
    int num, digit, count = 0;
    
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter digit: ";
    cin >> digit;
    
    int temp = num;
    while (temp > 0) {
        if (temp % 10 == digit) count++;
        temp /= 10;
    }
    
    cout << "Frequency of " << digit << " in " << num << " is: " << count << endl;
    
}