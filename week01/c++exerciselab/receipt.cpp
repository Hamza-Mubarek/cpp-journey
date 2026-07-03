
#include <iostream>
int main(){
    const int SISE=100;
    std::string name[SISE];
    double price[SISE];
    int quantity[SISE];
    std::cout<<"enter the number of items types: ";
    int count=0;
    std::cin>>count;
    if(count>SISE){
        std::cout<<"the number of items types should not exceed "<<SISE<<std::endl;
        return 1;
    }
    for(int i=0; i<count; i++){
        std::cout<<"enter name of item "<<i+1<<":";
        std::cin>>name[i];
        std::cout<<"enter the quantity of your "<<name[i]<<": ";
        std::cin>>quantity[i];
        std::cout<<"enter the price per unit of the "<<name[i]<<" in($): ";
        std::cin>>price[i];
    }
    std::cout<<"\n\n"<<std::endl;
    std::cout<<"Item Name\tQuantity\tUnit Price"<<std::endl;
    double total = 0;
    for(int i=0; i<count; i++){
        std::cout<<name[i]<<"\t\t"<<quantity[i]<<"\t\t"<<price[i]<<std::endl;
        total += quantity[i]*price[i];
    }
    std::cout<<"\n\n"<<std::endl;
    std::cout<<"total cost:"<<total<<std::endl;
    return 0;
}

