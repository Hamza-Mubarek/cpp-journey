/*
Project : Console Calculator
Version : 1.3
Author  : Hamza Mubarek
Course  : CS104
Week    : 1
*/
#include <iostream>
#include <string>
#include <iomanip>

std::ostream& formatBody(std::ostream& os, char symbol, int length, std::string text){
   return os<<std::left<<std::setfill(symbol)<<std::setw(length)<<text<<""<<std::setfill(' ');
}

std::ostream& formatTitle(std::ostream& os, char symbol, int length,  std::string text){
   return os<<std::setfill(symbol)<<std::setw(length)<<""<<text<<std::setfill(' ');
}

void menu(){
    std::cout<<"\n==============================="<<"\n";
    std::cout<<"||      Console Calculator   ||"<<"\n";
    std::cout<<"==============================="<<"\n";
    std::cout<<"|| 1. Addition               ||"<<"\n";
    std::cout<<"|| 2. Subtraction            ||"<<"\n";    
    std::cout<<"|| 3. Multiplication         ||"<<"\n";
    std::cout<<"|| 4. Division               ||"<<"\n";
    std::cout<<"|| 5. Exit                   ||"<<"\n";
    std::cout<<"==============================="<<"\n";    
    std::cout<<"Select an operation (1-5): ";
}

double addition(double firstNum, double secondNum){
    return firstNum+secondNum ;
}

double subtraction(double firstNum, double secondNum){
    return firstNum-secondNum;
}

double multiplication(double firstNum, double secondNum){
    return firstNum*secondNum;
}

bool division(double firstNum,double secondNum,double& result){
     if(secondNum==0){
        return false;
    }
    result=firstNum/secondNum;
    return true;
}

int main(){
    const int DIVIDER_WIDTH = 50;
    const int LABEL_WIDTH = 20;

    formatBody(std::cout, '=', DIVIDER_WIDTH, "")<<"\n";
    formatTitle(std::cout, ' ', LABEL_WIDTH, "WELCOME")<<"\n";
    formatBody(std::cout, '=', DIVIDER_WIDTH, "")<<"\n\n";

    int choice;
    

    do{
        menu();
        std::cin>>choice;

        while(std::cin.fail() || choice>5 || choice<1){
            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(1000,'\n');
            }
            std::cout<<"Invalid input! Please enter a number from the menu: ";
            std::cin>>choice;
        }
        
        if(choice==5){
            break;
        }
        
        formatBody(std::cout, ' ', LABEL_WIDTH, "Enter first number")<<": ";
        double firstNum;
        std::cin>>firstNum;
        formatBody(std::cout, ' ', LABEL_WIDTH, "Enter second number")<<": ";
        double secondNum;
        std::cin>>secondNum;
        double result=0.0;
  
        switch(choice){
            case 1: result=addition(firstNum, secondNum);
                    formatBody(std::cout, ' ',LABEL_WIDTH, "result")<<": "<<result;
                    break;
            case 2: result=subtraction(firstNum, secondNum);
                    formatBody(std::cout, ' ',LABEL_WIDTH, "result")<<": "<<result;
                    break;
            case 3: result=multiplication(firstNum, secondNum);
                    formatBody(std::cout, ' ',LABEL_WIDTH, "result")<<": "<<result;
                    break;
            case 4: if(division(firstNum, secondNum, result)){
                        formatBody(std::cout, ' ',LABEL_WIDTH, "result")<<": "<<result;
                    }
                    else{
                        result=0.0;
                        std::cout<<"Invalid! sorry bruh, but Aristochemides said not to divide by zero!";
                    }
                    break;
        }
    }while(choice!=5);
    
    std::cout<<"\n";
    formatBody(std::cout, '=', DIVIDER_WIDTH, "")<<"\n";
    formatTitle(std::cout, ' ', LABEL_WIDTH, "THANK YOU")<<"\n";
    formatBody(std::cout, '=', DIVIDER_WIDTH, "")<<"\n\n";
    return 0;
}
