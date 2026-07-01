#include <iostream>
int getmynum(int num[], int size, int element);
int getmyname(std::string name[], int size1,std::string myname);
int main(){

    int num[]={1,2,3,4,5,6,7,8,9,10};
    std::string name[] = { "hamza","hibet" , "fares", "sami", "miki", "semir", "teme"};
    int size1=sizeof(name)/sizeof(name[1]);
    int size=sizeof(num)/sizeof(num[1]);
    int mynum;
    std::string myname;
    int index;
    int index1;
    
    std::cout<<"enter the number you want out of the array\n";
    std::cin>>mynum;
    index=getmynum(num, size, mynum);
    if(index!=-1){
        std::cout<<"your number is found at index  "<<index<<'\n';

    }
    else{
        std::cout <<"your number is not in the array";
    }

    std::cout<<"Enter the name you want\n";
    getline(std::cin, myname)>>myname;
    index1=getmyname(name, size1, myname);
    if(index!=-1){
        std::cout<<"your name is found at index  "<<index1<<'\n';

    }
    else{
        std::cout <<"your name is not in the array";
    }
}
int getmynum(int num[], int size, int mynum){
    for(int i=0; i<size; i++){
        if(num[i]==mynum){
            return i;
        }
    }
    

        return -1;
}
int getmyname(std::string name[], int size1,     std::string myname){
    for(int i=0; i<size1 ; i++){
        if(name[i]==myname){
            return i;

        }

    }
    return -1;
}