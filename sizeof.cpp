#include <iostream>
int main(){
    long long amount=100;
    std::cout <<sizeof(amount)<<" bytes\n";
    int num=9;
    std::cout <<sizeof(num)<<" bytes\n";
    std::string name= "hamza";
    std::cout <<sizeof(name)<<" bytes\n";
    double hellow= 50;
    std::cout <<sizeof(hellow)<<" bytes\n";
    long double hello= 50;
    std::cout <<sizeof(hello)<<" bytes\n";
    char grade='f';
    std::cout <<sizeof(grade)<<" bytes\n";
    char grades[]={'f', 'a', 'b', 'c', 'd'};
    std::cout <<sizeof(grades)<<" bytes\n";
    std::cout <<sizeof(grades)/sizeof(char)<<" elements\n";
    bool student=true;
    std::cout <<sizeof(student)<<" bytes\n";
    std::string studentName[]={"hamza", "hibet", "fares", "semir", "temesgen"};
    std::cout <<sizeof(studentName)<<" bytes\n";
    std::cout<<sizeof(studentName)/sizeof(std::string)<<" elements\n";

   

}
