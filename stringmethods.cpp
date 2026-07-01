# include <iostream>
using text_t = std::string;
auto& out= std::cout;
auto& in= std::cin; 
int main() {
    text_t name;
    out << "Enter your name: ";
    std::getline(in, name);
    out << name.at(0)<<"\n";
    if(name.length()>12){
     out <<" your name can't be over 12 charaters\n";
    }
    else{
        out<< "welcome, " << name <<"!\n";
    }
    if(name.empty()){
        out << "you didn't enter a name.\n";
    }
    else {
        out << " hello, " << name <<"!\n";
    }
    //name.clear();
    //out <<"hello your name was cleared, now it's empty" <<name<<"\n";

    //name.append("@gmail.com");
     //out << "your email is: " << name << "\n";
    //name.insert(0, "hello, ");
    //out<< "your name is: "<<name <<"\n";
    
    out << name.find("h") << "\n";
    out << name.erase(0,3) << "\n";




    


    return 0;
}