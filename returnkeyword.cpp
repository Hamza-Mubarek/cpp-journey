#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
#include <string>
double square(double length);
double cube(double length);
int main () {
    double length;
    out<< "enter the length of the cube : ";
    in>> length;
    std::string type;
    out << "enter (volume) if you want volume\n";
    out << "enter (area) if you want area\n";
    in >> type;
    if(type=="area"){
        double area=square(length);
    out<< "the area is: "<<area<<'\n';
    }
    else if(type=="volume"){
         double volume = cube(length);
    out << "the cube is :"<< volume<<'\n';
    }
    else{
        out <<"invalid please read the instruction: \n"; 
    }
    return 0;
    
   


}
 double square(double length){
    return length * length;
 }
 double cube(double length){
    return length * length * length;
 }