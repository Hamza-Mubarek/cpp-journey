#include <iostream>
#include <ctime>
auto& out = std::cout;
auto& in = std::cin;
int main() {

    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100)+1;
    out<<"**************number gussing loop***********\n";
    do{
        out << "enter a guess between (1-100): ";
        in >> guess;
        tries++;

        if (guess>num) {
          out<< "too high \n";
            }
        else if(guess<num){
            out <<"too low\n";
        }
        else{
            out<<"that's correct, it took you   "<<tries<<" number of tries to get it congradulations" <<'\n';
        }
                       


}while(guess!=num);
out<< "*********************************************";
  return 0 ;


}