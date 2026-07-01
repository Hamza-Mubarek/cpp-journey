#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    int grade=60;
    out<<( grade >=75 ? "you passed the exam!" : "you failed the exam, better luck next time!") << std::endl;
    int number=9;
    out <<(number % 2 ? "the number is odd." : "the number is even.")<<std::endl;
    bool isRaining=true;
    out <<(isRaining ? "don't go outside" : "enjoy the nice wiather. ")<< std::endl;
    
    int a=10;
    int b=20;
    int bigger = (a>b)? a : b ;
    out<< "the bigger of the two values is: "<< bigger <<'\n';






    return 0;
}