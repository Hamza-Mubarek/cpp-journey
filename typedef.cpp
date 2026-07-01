#include <iostream>
#include <vector>
typedef std::string text_t;
//using output_t = std::cout; this is another way of creating an alias for a type
typedef int number_t;
//using number_t = int; this is another way of creating an alias for a type
auto& out = std::cout;
auto& end = std::endl<char, std::char_traits<char>>;
int main() {
    text_t name="Hamza mubarek";
    number_t age=19;
    out <<"my name is " << name <<end<< " and I am " << age << " years old." << end;
    return 0;






}