#include <iostream>
#include <iomanip>
void printDivider(char symbol, int width){
    std::cout<<std::setfill(symbol)<<std::setw(width)<<""<<std::setfill(' ')<<"\n";
}
std::ostream& format35(std::ostream& os){
    return os<<std::left<<std::setw(35);
}
int main(){

    printDivider('=', 50);
    std::cout<<std::setw(22)<<""<<"WELCOME"<<"\n";
    printDivider('=', 50);

    int seconds;
    std::cout<<format35<<"Enter the number of seconds"<<": ";
    std::cin>>seconds;
    std::cout<<"\n";

    int hours = seconds / 3600;
    int remaining_minutes = seconds / 60 - hours * 60;
    int remaining_seconds = seconds % 60;

    printDivider('=', 50);
    std::cout<<std::setw(18)<<""<<"TIME CONVERSION"<<"\n";
    printDivider('=', 50);

    
    std::string time_conversion=std::to_string(seconds)+" seconds is equal to ";
    std::cout<<format35<<time_conversion<<"= "<<hours<<" hours, "<<remaining_minutes<<" minutes, and "<<remaining_seconds<<" seconds"<<"\n\n";
    
    std::cout<<std::setfill('-')<<std::setw(20)<<""<<" THANK YOU "<<std::setfill('-')<<std::setw(20)<<""<<std::setfill(' ')<<"\n";
    
    return 0;
}