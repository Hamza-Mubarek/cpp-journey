#include <iostream>
#include <string>
#include <iomanip>

void printDivider(char symbol, int width){
    std::cout << std::setfill(symbol) << std::setw(width) << "" <<std::setfill(' ') << std::endl;
}


std::ostream& decimalPrecision(std::ostream& os) {
    return os << std::fixed << std::setprecision(2);
}

std::ostream& format40(std::ostream& os) {
    return os << std::left << std::setw(40);
}


void displayMenu() {
    std::cout << std::endl;
    std::cout << "||==========================||" << std::endl;
    std::cout << "||        MINI ATM          ||" << std::endl; 
    std::cout << "||==========================||" << std::endl;
    std::cout << "|| Please select an option: ||" << std::endl;
    std::cout << "|| 1. Check Balance         ||" << std::endl;
    std::cout << "|| 2. Deposit Money         ||" << std::endl;
    std::cout << "|| 3. Withdraw Money        ||" << std::endl;
    std::cout << "|| 4. Exit                  ||" << std::endl;
    std::cout << "||==========================||" <<"\n"<< std::endl;
}


double checkBalance(double balance) {
    std::cout<<format40<<"Your current balance is" << decimalPrecision <<": $"<< balance <<"\n" <<std::endl;
    std::cout<<"==thank you for using our mini ATM. Have a great day=="<<std::endl;
    return balance;
}


double depositMoney(double& balance) {
    double depositAmount;
    std::cout << format40 << "Enter the amount to deposit" << ": ";
    std::cin >> depositAmount;
    if(depositAmount <= 0) {
        std::cout << "Deposit amount must be greater than $0." << std::endl;
        return balance;
    }
    balance += depositAmount;
    printDivider('-', 50);
    std::cout << format40 << "You have successfully deposited" << ": $" << decimalPrecision << depositAmount << "." << std::endl;
    std::cout << format40 << "Your new balance is" << ": $" << decimalPrecision << balance << std::endl;
    printDivider('-', 50);
    std::cout<<"==thank you for using our mini ATM. Have a great day=="<<"\n"<<std::endl;
    return balance;
}


double withdrawMoney(double& balance) {
    double withdrawAmount;
    std::cout << format40 << "Enter the amount to withdraw" << ": ";
    std::cin >> withdrawAmount;
    if(withdrawAmount <= 0) {
        std::cout << "Withdrawal amount must be greater than $0." << std::endl;
        return balance;
    }
    if(withdrawAmount > balance) {
        std::cout << "Insufficient funds." << std::endl;
        return balance;
    }
    balance -= withdrawAmount;
    printDivider('-', 50);
    std::cout << format40 << "You have successfully withdrawn" << ": $" << decimalPrecision << withdrawAmount << "." << std::endl;
    std::cout << format40 << "Your new balance is" << ": $" << decimalPrecision << balance << std::endl;
    printDivider('-', 50);
    std::cout<<"==thank you for using our mini ATM. Have a great day=="<<"\n"<<std::endl;
    return balance;
}


int main() {

    printDivider('=', 50);
    std::cout << std::setfill(' ') << std::setw(17)<<"" << "WELCOME SIR/MADAM" << std::endl;
    printDivider('=', 50);

    std::string name;
    std::cout <<format40<<"Enter your name"<<": ";
    std::getline(std::cin, name);

    int age;
    std::cout << format40 << "Enter your age" << ": ";
    std::cin >> age;
    if(age < 18) {
        std::cout << "Sorry, you must be at least 18 years old to use the mini ATM." << std::endl;
        return 0;
    }

    double balance = 0.0;
    double startingBalance;
    std::cout << format40 << "Enter your starting balance" << ": ";
    std::cin >> startingBalance;
    if(startingBalance < 1000) {
        std::cout << "Starting balance should be at least $1000." << std::endl;
        return 0;
    }
    balance += startingBalance;

    printDivider('-', 50);
    std::cout << "Congratulations!" << name << ", your starting balance is $" << decimalPrecision << balance << "." << std::endl;
    printDivider('-', 50);

    int choice;
    do{ 
        displayMenu();
        std::cout << format40 << "Enter your choice" << ": ";
        std::cin >> choice;
        switch(choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositMoney(balance);
                break;
            case 3:
                withdrawMoney(balance);
                break;
            case 4:
                std::cout << "==Thank you for using our mini ATM. Have a great day==!" << "\n" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }while(choice != 4);

    return 0;
}