#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    int age;
    out << "enter your age: ";
    in >> age;
    if(age >= 18) {
        out << "welcome to the site! " << std::endl;
    } 
    else if(age < 18) {
        out << "you are a minor." << std::endl;
    }
    else {
        out << "invalid age entered." << std::endl;
    }

    





    return 0;
}