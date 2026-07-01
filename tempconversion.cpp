#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    double temp;
    char unit;
    out << "***************Temperature Converter***************" << std::endl;
    out<< "welcome to the temperature converter!\n";
    out <<"  Enter F for farenhite\n";
    out <<"  Enter C for celsius\n";
    out << "what unit do you want to convert to? (F/C):\n ";
    in >> unit;
    if(unit == 'F' || unit == 'f') {
        out << "enter the temperature in celsius: ";
        in >> temp;
        double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        out << temp << " degrees celsius is equal to " << fahrenheit << " degrees farenhite." << std::endl;
    } 
    else if(unit == 'C' || unit == 'c') {
        out << "enter the temperature in farenhite: ";
        in >> temp;
        double celsius = (temp - 32.0) * 5.0 / 9.0;
        out << temp << " degrees farenhite is equal to " << celsius << " degrees celsius." << std::endl;
    }
    else {
        out << "invalid unit entered. please enter either F or C." << std::endl;
    }
    out << "***************************************************" << std::endl;
    



    return 0;

}