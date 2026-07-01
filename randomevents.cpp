#include <iostream>
#include <ctime>
auto& out = std::cout;
int main() {
    srand(time(0));
    int numRand = rand() % 5+1;
    switch (numRand){
        case 1:
          out<<"you won 2 million dollars";
             break;
        case 2:
          out<<"you won  1 million dollars";
              break;
        case 3:
        out<<"you won half million dollars";

              break;
        case 4:
        out<<"you won  quarter million dollars";

             break;
        case 5:
        out<<"you won 0 dollars";
        break ;



    }




    return 0;
}