#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main() {
    char op;
    double num1, num2, result;
    out <<"***************calculator***************" << std::endl;
    out <<"Enter an operater (+, -, *, /): ";
    in >>op;
    out << "enter number 1:";
    in >> num1;
    out << "enter number 2:";
    in >> num2;
    switch(op) {
        case '+':
            result = num1 + num2;
            out << "the result of " << num1 << " + " << num2 << " is: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            out << "the result of " << num1 << " - " << num2 << " is: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            out << "the result of " << num1 << " * " << num2 << " is: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                out << "the result of " << num1 << " / " << num2 << " is: " << result << std::endl;
            } else {
                out << "error: division by zero is not allowed." << std::endl;
            }
            break;
        default:
            out << "error: invalid operator entered." << std::endl;
    }
    out<< "****************************************" << std::endl;
    return 0;
}