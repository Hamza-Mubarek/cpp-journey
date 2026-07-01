#include <iostream>
int main(){
    std::string name[]={"hamza", "hibet", "semir"};
    for(int i=0; i < sizeof(name)/sizeof(std::string); i++){
        std::cout<<name[i]<<'\n';

    }
    //or
    for(std::string names : name){
        std::cout<<names<<'\n';
    }
    char grades[]={'A', 'B', 'C', 'D', 'F'};
    for(int i=0; i<sizeof(grades)/sizeof(char); i++){
        std::cout<<grades[i]<<'\n';
    }
    for(char grade : grades){
        std::cout<<grade<<'\n'; 
    }
}