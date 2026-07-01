#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
using txt_t = std::string;
txt_t mixer(txt_t firstName, txt_t lastName);
int main(){

    txt_t firstName;
    out<< "Enter your first name: \n";
    in>> firstName;
    txt_t lastName;
    out<< "Enter your last name: \n";
    in>>lastName;
    txt_t fullName=mixer(firstName, lastName);
    out << "your full name is: "<<fullName ;
    return 0;
}
txt_t mixer(txt_t firstName, txt_t lastName){
    return  firstName + " " + lastName;
}
 