#include <iostream>
int main(){
    std::string cars[][4]={{"plant protiens are: ", "beans","lentils","cheakpeas"},
                          {"diary protiens are: ","milk","yoghurt","cheese"},
                          {"animal proteins are: ","beef","eggs","salmon"}};
    int sizerow=sizeof(cars)/sizeof(cars[0]);
    int sizecol=sizeof(cars[0])/sizeof(cars[0][0]);
    for(int i=0; i<sizerow; i++){
        for(int j=0; j<sizecol; j++){
            std::cout<<cars[i][j]<<"  ";
        }
        std::cout<<'\n';
    }


    return 0;
}