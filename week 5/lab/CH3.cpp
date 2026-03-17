#include <iostream>
using namespace std;

int main() {
    int pin, choice;
    double balance = 5000.00, amount;
    bool correctPIN = false;
    
    for(int i = 1; i <= 3; i++) {
        cout << "Enter PIN (Attempt " << i << "): ";
        cin >> pin;
        
        if(pin == 1234) { 
            correctPIN = true;
            cout << "\nLogin Successful!\n";
            break;
        } else if(i < 3) {
            cout << "Wrong PIN. Try again.\n";
        } else {
            cout << "Too many wrong attempts. Exiting...\n";
            return 0;
        }
    }

    if(correctPIN) {
        do {
            cout << "\n=== ATM MENU ===";
            cout << "\n1 -> Check Balance";
            cout << "\n2 -> Deposit Money";
            cout << "\n3 -> Withdraw Money";
            cout << "\n4 -> Exit";
            cout << "\nChoice: ";
            cin >> choice;
            
            if(choice == 1) {
                cout << "Balance: Rs. " << balance << endl;
            }
            else if(choice == 2) {
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;
                if(amount > 0) {
                    balance = balance + amount;
                    cout << "New Balance: Rs. " << balance << endl;
             } else {
                    cout << "Invalid amount!\n";
                }
            }
            else if(choice == 3) {
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;
                if(amount > 0 && amount <= balance) { 
                    balance = balance - amount;
                    cout << "New Balance: Rs. " << balance << endl;
                } else if(amount > balance) {
                    cout << "Insufficient Balance!\n";
                } else {
                    cout << "Invalid amount!\n";
                }
            }
            else if(choice == 4) {
                cout << "Thank you! Goodbye.\n";
            }
            else {
                cout << "Invalid choice! Try again.\n";
            }
            
        } while(choice != 4);
    }
    
    return 0;
}