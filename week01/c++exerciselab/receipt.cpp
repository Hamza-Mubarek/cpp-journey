
#include <iostream>
#include <iomanip>
#include <vector>
std::ostream& format50(std::ostream& os){
    return os<<std::left<<std::setw(50);
}
void printDivider(char symbol, int width){
    std::cout<<std::setfill(symbol)<<std::setw(width)<<""<<std::setfill(' ')<<"\n";
}
std::ostream& format15(std::ostream& os){
    return os <<std::left<<std::setw(15);
}
int main(){
    const int SISE=100;
    std::vector<std::string> name(SISE);
    std::vector<double> price(SISE);
    std::vector<int> quantity(SISE);
    printDivider('=', 50);
    std::cout<<std::setw(22)<<""<<"WELCOME"<<"\n\n";
    printDivider('=', 50);
    std::cout<<format50<<"enter the number of items types"<<": ";
    int count=0;
    std::cin>>count;
    if(count>SISE){
        std::cout<<"the number of items types should not exceed "<<SISE<<std::endl;
        return 1;
    }
    printDivider('-', 50);
    for(int i=0; i<count; i++){
        std::string itemPrompt="enter the name of item "+std::to_string(i+1);
        std::cout<<format50<<itemPrompt<<": ";
        std::cin>>name[i];
        std::string quantityPrompt="enter the quantity of your "+name[i];
        std::cout<<format50<<quantityPrompt<<": ";
        std::cin>>quantity[i];
        std::string pricePrompt="enter the price per unit of the "+name[i]+" in($): ";
        std::cout<<format50<<pricePrompt<<": ";
        std::cin>>price[i];
        printDivider('-', 50);
    }
    std::cout<<"\n"<<std::endl;
    printDivider('=', 50);
    std::cout<<std::setw(22)<<""<<"RECEIPT"<<"\n";
    printDivider('=', 50);
    std::cout<<format15<<"Item Name"<<format15<<"Quantity"<<format15<<"Unit Price"<<std::endl;
    double total = 0;
    for(int i=0; i<count; i++){
        std::cout<<format15<<name[i]<<format15<<quantity[i]<<format15<<price[i]<<std::endl;
        total += quantity[i]*price[i];
    }
    printDivider('=', 50);
    std::cout<<"\n"<<std::endl;
    std::cout<<format15<<"Total sum"<<": "<<total<<std::endl;
    std::cout<<format15<<"Tax(5%)"<<": "<<total*0.05<<std::endl;
    std::cout<<format15<<"Total amount"<<": "<<total+total*0.05<<"\n"<<std::endl;
    printDivider('=', 50);
    std::cout<<std::setw(21)<<""<<"THANK YOU"<<"\n";
    printDivider('=', 50);

    return 0;
}

