#include <iostream>
#include <cmath>
int main() {
    double x= 3;
    double y= 4;
    double z;
    double m;
    z= std::max(x,y);
    std::cout << "the maximum of " << x << " and " << y << " is " << z << std::endl;
    m=std::min(x, y);
    std::cout << "the minimum of " << x << " and " << y << " is " << m << std::endl;
    z=pow(2, 3);
    std::cout << "two raised to the power of three is: " << z <<std::endl;
    z=sqrt(81);
    std::cout << "the square root of the number 81 is: " <<z <<std::endl;
    z=abs(-5);
    std::cout << "the absolute value of -5 is: " << z << std::endl; 
    z = round(3.14);
    std::cout << "the rounded value of 3.14 is: " << z << std::endl;
    z = ceil(3.14);
    std::cout << "the smallest integer greater than or equal to 3.14 is:" << z << std::endl;
    z= floor (3.14);
    std::cout << "the largest integer less than or equal to 3.14 is: " << z << std::endl;   

    return 0;
}
