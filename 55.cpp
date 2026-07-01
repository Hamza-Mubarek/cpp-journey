#include <iostream>
#include <string>
using namespace std;

int main() {
    const int STUDENTS = 10;
    string names[STUDENTS];
    int ids[STUDENTS];
    double marks[STUDENTS];
    
    for (int i = 0; i < STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: ";
        cin >> names[i];
        cout << "ID: ";
        cin >> ids[i];
        cout << "Mark: ";
        cin >> marks[i];
    }
    
    cout << "\n\n--- Student Records ---\n";
    cout << "Name\tID\tMark\n";
    for (int i = 0; i < STUDENTS; i++) {
        cout << names[i] << "\t" << ids[i] << "\t" << marks[i] << endl;
    }
    
    // Calculate class average
    double total = 0;
    for (int i = 0; i < STUDENTS; i++) {
        total += marks[i];
    }
    cout << "\nClass Average: " << total / STUDENTS << endl;
    
    return 0;
}
/*
#include <iostream>
int main() {
std::cout<<"Welcome to my C++ journey!\n
Today is my first lab."<<std::endl;
return 0;
}
#include <iostream>
#include <string>
int main() {
std::string name="hamza mubarek\n";
std::string university="Addis Ababa University
\n";
std::string major="Computer Science\n";
std:: string favSubject="C++\n";
std::cout<<name<<university<<major<<favSubect<<std::endl;
return 0;
}
#include <iostream>
#include <string>
int main() {
std::cout<<"------------profile------------\n";
std::string name;
getline(std::cin,name);
std::cout<<"Name: "<<name<<std::endl;
int age;
std::cin>>age;
std::cout<<"Age: "<<age<<std::endl;
double height;
std::cin>>height;
std::cout<<"Height: "<<height<<" m"<<std::endl;
return 0;
}
#include <iostream>
int main() {
std::cout<<"enter two numbers to add\n";
int num1,num2;
std::cin>>num1>>num2;
std::cout<<"Sum: "<<num1+num2<<std::endl;
return 0;
}
#include <iostream>
int main() {
std::cout<<"Enter the length of the rectangle"<<std::endl;
double length;
std::cin>>length;
std::cout<<"Enter the width of the rectangle"<<std::endl;
double width;
std::cin>>width;
std::cout<<"Area= "<<width*length<<std::endl;
return 0;
}
#include <iostream>
int main() {
std::cout<<"Enter your temprature in celsius."<<std::endl;
double tempCelsius;
std::cin>>tempCelsius;
std::cout<< "Temprature in Celsius: "<<tempCelsius<<std::endl;
std::cout<<"Temprature in Fahrenheit: "<<(9.0/5)*tempCelsius+32<<std::endl;
return 0;
}
#include <iostream>
int main() {
std::cout<<"Enter your age."<<std::endl;
int age;
std::cin<<age;
std::cout<<"Your age: "<<age;
std::cout<<"You have lived about "<<age*365<<" days."<<std::endl;
return 0;
}
#include <iostream>
int main() {
std::cout<<"Enter the first number."<<std::endl;
double num1;
std::cin>>num1;
std::cout<<"first number: "<<num1<<std::endl;
std::cout<<"Enter the second number."<<std::endl;
double num2;
std::cin>>num2;
std::cout<<"second number: "<<num2<<std::endl;
std::cout<<"Addition: "<<num1+num2<<std::endl;
std::cout<<"Subtraction: "<<num1-num2<<std::endl;
std::cout<<"Multiplication: "<<num1*num2<<std::endl;
std::cout<<"division: "<<num1/num2<<std::endl;


return 0;
}
*/
  
