#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    for(int i=1; i<=3; i++){
    for(int i = 1; i<= 10; i++){
      out<< i<<' ';
    }
    out<< "\n" ;
    }
    char symbol; ;
    int row;
    int column;
    
     out <<"enter # of rows:  ";
     in >> row ;
     out << "enter # of columns: ";
     in >> column;
     out << "enter the choice of your character(symbol): ";
     in >> symbol;
    
    for(int i=1; i<=row; i++){
    for(int j=1; j<=column; j++){
        out<<symbol<<' ';
    }
    out << "\n";
    
    }
    


    return 0;
}