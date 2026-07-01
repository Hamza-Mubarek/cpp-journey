#include <iostream>
#include <vector>
auto& out = std::cout;
auto& end = std::endl<char, std::char_traits<char>>;
int main() {
 //impicit (automatic) and explicit(precede value with new data type) conversion
    int x=3.14;
    out << x << end ;
    double y=(int) 3.14;
    out << y << end ;
    char z= 100;
    out<<z<<end;
    out<<  (char) 100 << end;

    int correct = 8;
    int questions = 10;
    double score = correct /(double) questions * 100;
    out << score <<"%" << end;
    return 0;

}