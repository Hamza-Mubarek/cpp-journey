#include <iostream>
// a function is a set/block of reusable code

void happyBirthday(std::string name, int age);
//function declaration


int main(){
    std::string name = "hamza";
    int age= 19;

   happyBirthday(name, age);
   //arguments
   happyBirthday(name, age);
   happyBirthday(name, age);
   return 0;
}
void happyBirthday(std::string name, int age){
    //function definition
    //void does not return a value
    //parameters
    std::cout<<"happy birth day to "<<name<<"\n";
    std::cout<<"happy birth day to " <<name<<"\n";
    std::cout<<"happy birth dear  nigga\n";
    std::cout<<"happy birth day to "<<name<<"\n";
    std::cout<<"you are " <<age<<"years old\n\n";

}
