#include <iostream>
auto& out= std::cout;
auto& in= std::cin;
int main() {
    int month;
    out << "Enter the month number (1-12): ";
    in >> month;
    switch(month) {
        case 1:
            out << "it is january." << std::endl;
            break;
        case 2:     
            out << "it is february." << std::endl;
            break;  
        case 3:
            out << "it is march." << std::endl;                 
            break;
        case 4:     
            out << "it is april." << std::endl;
            break;
        case 5:
            out << "it is may." << std::endl;
            break;
        case 6:
            out << "it is june." << std::endl;
            break;  

        case 7:
            out << "it is july." << std::endl;  
            break;  
        case 8:
            out << "it is august." << std::endl;
            break;  
        case 9:
            out << "it is september." << std::endl;
            break;
        case 10:
            out << "it is october." << std::endl;
            break;  
        case 11:
            out << "it is november." << std::endl;
            break;  
        case 12:
            out << "it is december." << std::endl;
            break;
        default:
            out << "invalid month number entered." << std::endl;

    }
     
    char grade;
    out <<" Enter your grade (A-F): ";
    in >> grade;
    switch(grade) {
        case 'A':
            out << "excellent! that's between 90-100." << std::endl;
            break;
        case 'B':
            out << "good job! that's between 80-89." << std::endl;
            break;
        case 'C':
            out << "you can do better. that's between 70-79." << std::endl;
            break;
        case 'D':
            out << "you need to work harder. that's between 60-69." << std::endl;
            break;
        case 'F':
            out << "you failed." << std::endl;
            break;
        default:
            out << "invalid grade entered." << std::endl;

    }


    return 0;
}