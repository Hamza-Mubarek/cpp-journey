#include <iostream>
int main(){
    std::cout<<"enter the amount in ethiopian birr: ";
    int ETB;
    std::cin>>ETB;
    std::cout<<"the amount in us dollars is: "<<ETB/140<<std::endl;
    return 0;
}