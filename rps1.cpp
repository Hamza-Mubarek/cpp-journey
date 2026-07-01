#include <iostream>
#include <ctime>
char playerChoice();
char computerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main() {
    char player;
    char computer;
    player=playerChoice();
    std::cout<<"your choice is: ";
    showChoice(player);

    computer=computerChoice();
    std::cout<<"computer's choice is: ";
    showChoice(computer);

    chooseWinner( player,  computer);
    

    return 0;
}

char playerChoice(){
    char player;
    do{ 
        std::cout<<"|******************************************|\n";
        std::cout<<"|  welcome to the rock paper scissors game |\n";
        std::cout<<"|******************************************|\n";
        std::cout<<"|    choose the letter of your choice      |\n";
        std::cout<<"|           'r' for rock                   |\n";
        std::cout<<"|           'p' for paper                  |\n";
        std::cout<<"|           's' for scissor                |\n";
        std::cout<<"|******************************************|\n";
        std::cin>>player;
        std::cout<<"|==========================================|\n";
    }while( player !='r' && player !='p' && player !='s');
    return player;
}
char computerChoice(){
    srand(time(0));
    int num=rand()%3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return num;
}
void showChoice(char choice){
    switch(choice){
    case 'r': std::cout<<"rock\n" ;
                break;
    case 'p': std::cout<<"paper\n" ;
                break;
    case 's': std::cout<<"scissors\n" ;
                break;
}

}
void chooseWinner(char player, char computer){
  switch(player){
    case 'r': if(computer=='r'){
                std::cout<<"it's a tie\n";
            }
            else if(computer=='p'){
                std::cout<<"you lose\n";
            }
            else{
                std::cout<<"you win\n";
            }
            break;
    case 'p': if(computer=='p'){
                std::cout<<"it's a tie\n";
            }
            else if(computer=='s'){
                std::cout<<"you lose\n";
            }
            else{
                std::cout<<"you win\n";
            }
            break;
    case 's': if(computer=='s'){
                std::cout<<"it's a tie\n";
            }
            else if(computer=='r'){
                std::cout<<"you lose\n";
            }
            else{
                std::cout<<"you win\n";
            }
            break;
  }
        std::cout<<"###########################################|\n";
}