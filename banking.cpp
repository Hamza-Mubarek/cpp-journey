#include <iostream>
auto& out= std::cout;
auto& in= std::cin;
void showBalance (double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice;
  do{
      out<<"*********************\n";
    out<<"welcome to Hamza baning\n";
    out<<"*********************\n\n";
    out<<"Enter your choice\n";
    out<<"1.show your balance\n";
    out<<"2.Deposit money\n";
    out<<"3.Withdraw money\n";
    out<<"4.Exit\n";
    out<<"*********************\n\n";
    in>>choice;
    switch(choice){
        case 1 : showBalance(balance);
                    break;
        case 2 : balance+=deposit();
                 showBalance(balance);
                    break;
        case 3 : balance-=withdraw(balance);
                 showBalance(balance);
                    break;
        case 4 : out<<"Thank you for banking\n";
        default : out<<"invalid choice\n";
    }
  }while(choice!=4);



return 0;
}
void showBalance(double balance){
  out<<"your balance is: $"<<balance<<'\n';
  }
double deposit(){
    double amount;
    out<<"how much do you want to deposit:\n";
    in>>amount;
    if(amount>0){
        return amount;
    }
    else{
        out<<"that's not a valid amount";
        return 0;
    }
  }
double withdraw(double balance){
    double amount;
    out<<"enter amount to be withdrawn\n ";
    in>>amount;
    if(amount>balance){
        out<<"insuffiecient funds\n";
        return 0;
    }
    else if(amount<=0){
        out<<"Enter a proper amount\n";
        return 0;
    }
    else{
        return amount;
    }
    
  }
