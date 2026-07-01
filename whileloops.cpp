# include <iostream>
using text_t = std::string;
auto& out= std::cout;
auto& in= std::cin; 
int main() {
    text_t name;
    while(true){
        out << "enter your name: ";
        std::getline(in, name);
        if(name.length()>12 || name.empty()){
            out << "please enter a valid name (12 characters or less)\n";
            }
        else{
            out << "welcome, " << name <<"!\n";
                break;
           
        }
    }
    return 0;
}