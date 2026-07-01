#include <iostream>
#include <string>
using text_t = std::string;
auto& out = std::cout;
auto& in = std::cin;
int main() {
    text_t name;
    out << "Enter your name: ";
    in>> name;
    out << "Hello, " << name << "!" << std::endl;
     int age;
     out << "enter your age:";
     in >>age;
     out << "you are " <<age << "years old." <<std::endl;
     text_t fullName;
     out << "enter your full name: ";
    std::getline(in >>std::ws, fullName);  // ✅ Call getline directly with stream and string
    out << "your full name is " << fullName << std::endl;
    return 0;
}