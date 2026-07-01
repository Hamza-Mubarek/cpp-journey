#include <iostream>
using namespace std;

int main(){

    int choice;

    double balance = 1000;

    do{

        cout << "\n====== ATM MENU ======\n";

        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        // handle menu option
        switch(choice){

            case 1:

                cout << "\nCurrent Balance = "
                     << balance
                     << endl;

                break;

            case 2:

                double deposit;

                cout << "\nEnter deposit amount: ";
                cin >> deposit;

                balance += deposit;

                cout << "Money deposited.\n";

                break;

            case 3:

                double withdraw;

                cout << "\nEnter withdrawal amount: ";
                cin >> withdraw;

                if(withdraw > balance){

                    cout << "Insufficient balance.\n";
                }
                else{

                    balance -= withdraw;

                    cout << "Withdrawal successful.\n";
                }

                break;

            case 4:

                cout << "\nExiting system...\n";

                break;

            default:

                cout << "\nInvalid option.\n";
        }

    }
    // keep looping until user chooses 4
    while(choice != 4);

    return 0;
}