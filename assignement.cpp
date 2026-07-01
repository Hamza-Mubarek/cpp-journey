#include <iostream>
/*
1!A~

int main(){
    int num;
    std::cout<<"enter the number to which we will end the count\n";
    std::cin>>num;
    for(int i=0; i<num; i++){
        std::cout<<i<<" ";
        if((i+1)%10==0){
            std::cout<<'\n';
        }

    }
    return 0;
}

B~

int main(){
    int num;
    std::cout<<"enter the number to which we will end the count\n";
    std::cin>>num;
    for(int i=1; i<=num; i++){
        std::cout<<i<<" ";
        if((i)%10==0){
            std::cout<<'\n';
        }

    }   
    return 0;
}

C~

int main(){
    int startnum;
    int n;
    std::cout<<"enter the starting number t\n";
    std::cin>>startnum;
    std::cout<<"enter the amount of numbers to be printed from this number t\n";
    std::cin>>n;
    
    for(int i=0; i<n; i++){
        std::cout<<startnum+i<<" ";
       if((i+1)%10==0)
       std::cout<<'\n';

    }   
    return 0;
}
*/
/*

2!

int main(){
    int num;
    std::cout<<"enter the number to start counting backwards\n";
    std::cin>>num;
    for(int i=num; i>0; i--){
        std::cout<<i<<" ";
        if((i)%10==0){
            std::cout<<'\n';
        }

    }   
    return 0;
}
*/
/*

3!

int main(){
    int num;
    do{
        std::cout<<"enter a positive number \n";
        std::cin>>num;
        
        if(num<0){
            std::cout<<"Now you have entered a negative number\n";
        }
    }while(num>0);
    
    
    return 0;
}
*/
/*

4!

int main(){
    int counter=0;
    for(char upper='A'; upper<='Z'; upper++){
        char lower=tolower(upper);
        std::cout<<upper<<lower<<" ";
        counter++;
        if((counter)%5==0)
        std::cout<<'\n';
       
        }
    return 0;
}
*/ 
/*

13!G~

int main(){
    for(int i=7; i>0 ; i--){
        for(int j=6; j>7-i ; j--){
            std::cout<<"*"<<" ";
        }
        std::cout<<'\n';
    }
}
*/
/*

5!

int main(){

    int numStart;
    int numFinish;
    std::cout<<"enter the start number: \n";
    std::cin>>numStart;
    std::cout<<"enter the end number: \n";
    std::cin>>numFinish;
    int sum=0;
    int product=1;
    int difference=numStart;
    for(int i=numStart; i<=numFinish; i++){
        sum+=i;
        product*=i;
        if(i!=numStart){
            difference=difference-i;
        }
        std::cout<<"current number: "<<i<<'\n';
        std::cout<<"sum: "<<sum<<'\n';
        std::cout<<"product: "<<product<<'\n';
        std::cout<<"difference: "<<difference<<'\n';
    }
    std::cout<<"======== final answer ========"<<'\n';
    std::cout<<"sum: "<<sum<<'\n';
    std::cout<<"product: "<<product<<'\n';
    std::cout<<"difference: "<<difference<<'\n';
    return 0;
}
*/ 
/*

6!

int main(){
    int num;
    std::cout<<"enter the last number to which you want to compute the reciprocals to: \n";
    std::cin>>num;
    double sum=0;
    for(int i=1; i<=num; i++){
        double recipro=1.0/i;
        sum+=recipro;
        std::cout<<"cuurent number: 1/"<<i<<"\n";
        std::cout<<"runnung sum: "<<sum<<"\n\n";
    }
    std::cout<<"==========final sum=============\n";
    std::cout<<"=          "<<sum<<  "          = ";


    return 0; 
}  
*/
/*

7!

#include <cmath>
int main(){
    char choice;
    do{
        std::cout<<"Enter '1' if you want to put a  number in square root\n";
        std::cout<<"Enter 'q' for quit if you want to Exit\n";
        std::cin>>choice;
        switch(choice){
        
            case '1':{

            double num;
            std::cout<<"enter the number to be square rooted: ";
            std::cin>>num;
            if(num<0){
                std::cout<<"please enter a positve number\n";
            }
            else{
                double squareRoot= sqrt(num);
                std::cout<<"result is: "<<squareRoot<<"\n\n";
            }
            break;
            }

            case 'q':

            std::cout<<"===============================\n";
            std::cout<<"Good buy and enjoy your day\n";
            std::cout<<"===============================\n";
            break;

            default:
            
            std::cout<<"Invalid choice.\n";
            break;
        }
    }while(choice!='q');
    return 0;
}
*/
/*

7!

#include <cmath>
using namespace std;
int main(){
    double number;
    char choice;
    do{
        cout << "\nEnter a number: ";
        cin >> number;
        if(number < 0){
            cout << "\nCannot compute square root of a negative number.\n";
        }
        else{
            double result = sqrt(number);
            cout << "\nSquare root = "<< result<< endl;
        }
        cout << "\nDo you want to continue? ";
        cout << "(y/n): ";
        cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
    cout << "\nProgram terminated.\n";
    return 0;
}
*/
int main(){
    int num;
    char choice;
    do{
        long long product=1;
        std::cout<<"Enter the number to factorial: \n";
        std::cin>>num;
        if(num==1 || num==0){
            std::cout<<"\n===========final result===========\n";
            std::cout<<"            1            ";
            std::cout<<"\n===========final result===========\n";
        }
        else if(num<0){
            std::cout<<"\nthat is invalid please select a positive integer.\n";
        }
        else{
            for(int i=num; i>0; i--){
                product*=i;
                std::cout<<"\n running product at "<<i <<": "<<product;   
            }
            std::cout<<"\n===========final result===========\n";
            std::cout<<"            "<<product<<"            ";
            std::cout<<"\n===========final result===========\n";
 
        }
        std::cout<<"\nDo you want to continue (y/n): ";
        std::cin>>choice;
        std::cout<<'\n';

    }while(choice=='y' || choice=='Y');
    
    
    return 0;
}