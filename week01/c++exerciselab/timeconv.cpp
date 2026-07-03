#include <iostream>
int main(){
    std::cout<<"enter the number of minutes: ";
    int minutes;
    std::cin>>minutes;
    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;
    std::cout<<"the time is: "<<hours<<" hours and "<<remaining_minutes<<" minutes."<<std::endl;
    return 0;
}