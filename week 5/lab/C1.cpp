#include <iostream>
using namespace std;

int main() {
    int numbers[] = {24, 50, 29};

    for(int i = 0; i < 3; i++) {
        cout << "Multiplication Table of " << numbers[i] << ":" << endl;

        for(int j = 1; j <= 10; j++) {
            cout << numbers[i] << " x " << j << " = " << numbers[i] * j << endl;
        }

        cout << endl;
    }
}