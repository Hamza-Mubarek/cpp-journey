#include <iostream>
using num_t = int; 
int main() {
    num_t student= 20;
    student=student+1;
    //student++; student+=1;
    student=student-1;
    //student--; student-=1;
    student=student*2;
    //student*=2;
    student=student/2;
    //student/=2;

    num_t remainder=student%3;
    std::cout << remainder << "\n";
    int students = 6-5+4*3/2+(5-4);
    //the order of operations is parentheses, multiplication and division, and then addition and subtraction
   std::cout << students <<std::endl ;





    return 0;
}