#include <iostream>
int main(){
    std::string foods[9];
    int size=sizeof(foods)/sizeof(foods[1]);
    std::string temp;
    for(int i=0 ; i<size; i++){
        std::cout<<"enter the food you like #"<<i+1<<" and 'q' if you want to quit"<<" : ";
        getline(std::cin, temp);
        if(temp=="q"){
        break;
        }
        else{
            foods[i]=temp;
        }
    }
    for(int i=0; !foods[i].empty(); i++){
        std::cout<<foods[i]<<'\n';
    }
    


    return 0;
}