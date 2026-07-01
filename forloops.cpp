#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    for(int i = 1; i<= 20; i++){
        if(i==13){
            continue ;
        }
      out<< i<<' ';
    }
    out<< "\n" ;
    out<<"happy new year\n";
    for(int i=10; i>=0; i--){
        if(i==7){
            break ;
        }
        out<< i <<' ';  
     }
     out<< "\n" ;
     out<<"happy new year again\n";


    return 0;
}