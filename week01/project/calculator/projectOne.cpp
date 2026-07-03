/*
Project : Console Calculator
Version : 1.0
Author  : Hamza Mubarek
Course  : CS104
Week    : 1
*/
#include <iostream>
#include <string>
#include <iomanip>

int main(){
    std::cout<<std::setfill('=')<<std::setw(38)<<"="<<std::endl;
    std::cout<<std::setfill(' ')<<std::setw(10)<<"  "<<"Console Calculator"<<std::endl;
    std::cout<<std::setfill('=')<<std::setw(38)<<"="<<"\n"<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::left<<std::setw(20)<<"Enter first number"<<": ";
    double num1;
    std::cin>>num1;
    std::cout<<"\n"<<std::left<<std::setw(20)<<"Enter second number"<<": ";
    double num2;
    std::cin>>num2;
    std::cout<<"\n"<<std::setfill('-')<<std::setw(38)<<"-"<<"\n"<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::left<<std::setw(15)<<"Addition"<<": "<<num1+num2<<"\n"<<std::endl;
    std::cout<<std::left<<std::setw(15)<<"Subtraction"<<": "<<num1-num2<<"\n"<<std::endl;
    std::cout<<std::left<<std::setw(15)<<"Multiplication"<<": "<<num1*num2<<"\n"<<std::endl;
    std::cout<<std::left<<std::setw(15)<<"Division"<<": "<<num1/num2<<"\n"<<std::endl;
    std::cout<<std::setfill('=')<<std::setw(38)<<"="<<"\n"<<std::endl;
    return 0;
}
