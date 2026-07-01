#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    int temp;
    out << "enter the temperature in celsius: ";
    in >> temp;
    bool sunny;
    if (temp>0 && temp<30) {
        out << "the weather is pleasant." << std::endl;
    } 
    else if (temp >=30 || temp <=0) {
        out << "the weather is not pleasant." << std::endl;
    } 

    else {
        out << "the weather is not pleasant." << std::endl;
    }
    if(sunny){
        out << "it is sunny outside." << std::endl;
    } 
    else if(!sunny) {
        out << "it is not sunny outside." << std::endl;
    }
    else {
        out << "it is not funny outside." << std::endl;
    }
    return 0;
}