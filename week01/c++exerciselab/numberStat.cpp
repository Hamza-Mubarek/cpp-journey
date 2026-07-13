#include <iostream>
#include <vector>
#include <iomanip>
std::ostream& format20(std::ostream& os){
    return os <<std::left<<std::setw(20)<<std::setfill(' ');
}
int main(){
    const int maxNumbers=100;
    int size;
    std::cout<<"How many numbers do you want to enter: ";
    std::cin>>size;
    std::cout<<std::setw(40)<<std::setfill('-')<<""<<std::setfill(' ')<<std::endl;
    if(size>maxNumbers){
        std::cout<<"you can not exceed 100 numbers\n";
        return 1;
    }

    std::vector<double> numbers(size);
    double sum=0;
    double largestNumber=numbers[0];
    double smallestNumber=numbers[0];
    for(int i=0; i<size; i++){
        std::cout<<format20<<"Enter number "<<i+1<<": ";
        std::cin>>numbers[i];
        sum+=numbers[i];
        if(largestNumber<numbers[i]){
            largestNumber=numbers[i];
        }
        if(smallestNumber>numbers[i]){
            smallestNumber=numbers[i];
        }
    }

    double average=sum/size;
   
    std::cout<<"===========================\n";
    std::cout<<format20<<"sum is"<<": "<<sum<<std::endl;
    std::cout<<format20<<"average is"<<": "<<average<<std::endl;
    std::cout<<format20<<"largest number is"<<": "<<largestNumber<<std::endl;
    std::cout<<format20<<"smallest number is"<<": "<<smallestNumber<<std::endl;
    std::cout<<"===========================\n";
    return 0;
}