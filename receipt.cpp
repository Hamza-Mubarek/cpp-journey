/*
#include <iostream>
int main(){
    std::cout<<"enter a number: ";
    int num;
    std::cin>>num;
    if(num%2==0){
        std::cout<<"the number is even."<<std::endl;
    }
    else{
        std::cout<<"the number is odd."<<std::endl;
    }
    return 0;
}
#include <iostream>
int main(){
    std::cout<<"enter the first number: ";
    int num1;
    std::cin>>num1;
    std::cout<<"enter the second number: ";
    int num2;
    std::cin>>num2;
    std::cout<<"enter the third number: ";
    int num3;
    std::cin>>num3;
    std::cout<<"the average of the three numbers is: "<<(num1+num2+num3)/3.0<<std::endl;
    return 0;
}
#include <iostream>
int main(){
    int CONST PI=3.14;
    int CONST RADIUS;
    std::cout<<"enter the radius of the circle: "<<std::endl;
    std::cin>>RADIUS;
    std::cout<<"the area of the circle is: "<<PI*RADIUS*RADIUS<<std::endl;
    std::cout<<"the circumference of the circle is: "<<2*PI*RADIUS<<std::endl;
    std::cout<<"the diameter of the circle is: "<<2*RADIUS<<std::endl;
    return 0;
}
*/
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

