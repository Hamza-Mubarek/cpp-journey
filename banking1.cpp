#include <iostream>
auto& out=std::cout;
void showbalance(double balance);
double depositmoney();
double withdraw(double balance);
int main(){
        double balance=0;
        int choice;
        do{
            out<<"*******************************\n";
            out<<"welcome to Hamza banking system\n";
            out<<"*******************************\n";
            out<<"choose the number of your choice\n";
            out<<"'1' to know your balance\n";
            out<<"'2' to deposit money\n";
            out<<"'3' to withdraw money\n";
            out<<"'4' to Exit\n";
            std::cin>>choice;
            switch(choice){
                case 1: showbalance(balance);
                        break;
                case 2: balance+=depositmoney();
                        showbalance(balance);
                        break;
                case 3: balance-=withdraw(balance);
                        showbalance(balance);
                        break;
                case 4: out<<"thank you for banking with us!\n";
                        break;
                default : out<<"invalid choice\n";
            }
            out<<"____________________________________\n";
        }while(choice != 4 );
return 0;
}
double depositmoney(){

    double deposit;
    out<<"how much do you want to deposit?\n";
    std::cin>>deposit;
    if(deposit<=0){
        out<<"invalid number, please enter a correct number\n";
        return 0;
    }
    else if(deposit>0){
        return deposit;
    }
    else{
        out<<"please enter a number\n";
        return 0;
    }

}

void showbalance(double balance){
    out<<"your balace is: $"<<balance<<'\n';
}

double withdraw(double balance){
    double amount;
    out<<"how much money do you wnat to withdraw: \n";
    std::cin>>amount;
    if(amount>=balance){
        out<<"sorry you don't have enough funds to proceed with this action\n";
        return 0;
    }
    else if(amount<=0){
        out<<"please enter an appropriate amount\n";
        return 0;
    }
    else if(amount<balance && amount>0){
        return amount;
    }
    else{
        out <<"that is invalid please make sure to check your input.\n";
        return 0;
    }


}