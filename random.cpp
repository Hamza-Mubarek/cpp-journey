#include <iostream>
#include <ctime>
auto& out = std::cout;
auto& end = std::endl<char, std::char_traits<char>>;
int main() {
    srand(time(NULL));
    int num1 = (rand() % 6)+1 ;
    int num2 = (rand() % 6)+1 ;
    int num3 = (rand() % 6)+1 ;
    out <<num1 <<'\n';
    out <<num2 <<'\n' ;
    out <<num3 <<'\n' ;
    
    return 0;
}