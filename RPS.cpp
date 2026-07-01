#include <iostream>
auto& out=std::cout;
#include <ctime>
char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main(){
    char player;
    char computer;
    player=getPlayerChoice();
    out<<"your choice: ";
    showChoice(player);
    computer=getComputerChoice();
    out<<"computer's choice: ";
    showChoice(computer);
    chooseWinner( player,  computer);

 return 0;
}
char getPlayerChoice(){
    char player;
    out<<"welcome to our game!\n";
    do{
        out<<"********************\n\n";
            out<<"choose a letter\n";
            out<<"'r' for rock\n";
            out<<"'p' for paper\n";
            out<<"'s' for Scissors\n";
            std::cin>>player;
    }while(player !='r' && player !='p' && player !='s');
     return player;
    }
char getComputerChoice(){
    srand(time(0));
    int num=rand()%3 +1;
    switch(num){
        case 1: return 'r';
        case 2: return 's';
        case 3: return 'p';
    }
    return num;

}
void showChoice(char choice){
    switch(choice){
        case 'r': out<<"rock\n" ;
                    break;
        case 'p': out<<"paper\n" ;
                    break;
        case 's': out<<"scissors\n" ;
                    break;
    }

}
void chooseWinner(char player, char computer){
  switch(player){
    case 'r': if(computer=='r'){
                out<<"it's a tie\n";
            }
            else if(computer=='p'){
                out<<"you lose\n";
            }
            else{
                out<<"you win\n";
            }
            break;
    case 'p': if(computer=='p'){
                out<<"it's a tie\n";
            }
            else if(computer=='s'){
                out<<"you lose\n";
            }
            else{
                out<<"you win\n";
            }
            break;
    case 's': if(computer=='s'){
                out<<"it's a tie\n";
            }
            else if(computer=='r'){
                out<<"you lose\n";
            }
            else{
                out<<"you win\n";
            }
            break;
  }
}