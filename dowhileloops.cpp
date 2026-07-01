#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    int number;
    do{
    out<<"enter a number: ";
    in >>number;
    } while(number <0);
    out<<"the number is:"<<number;




    return 0;
}