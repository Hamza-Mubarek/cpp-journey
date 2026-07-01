#include <iostream>
#include <cmath>
auto& out = std::cout;
auto& in= std::cin;
int main() {
    double a;
    double b;
    double c;
    out << "enter the33 length of hte first leg og the right triangle: ";
    in>> a;
    out << "enter the length of the second leg of the right triangle: ";    
    in >> b;
     c=sqrt(pow(a,2)+pow(b,2));
     out << " the hypotenuse of the right triangle with legs of length " <<a << " and " <<b <<"is:" << c << std::endl;






    return 0;
}