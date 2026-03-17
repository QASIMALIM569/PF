#include <iostream>
using namespace std;

int main() {
    char choice = 'y'; 
    
    while (choice != 'n' && choice != 'N') {
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice != 'n' && choice != 'N') {
            cout << "I am happy!" << endl;
        }
    }
    
    return 0;
}