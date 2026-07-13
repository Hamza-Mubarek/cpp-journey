#include <iostream>
#include <vector>
#include <iomanip>
// Reusable stream manipulator
std::ostream& format37(std::ostream& os) {
    return os << std::left << std::setw(37);
}
std::ostream& format50(std::ostream& os) {
    return os << std::left << std::setw(50);
}
std::ostream& format15(std::ostream& os) {
    return os << std::left << std::setw(15);
}
void printDivider(char symbol, int width) {
    std::cout << std::setfill(symbol) << std::setw(width) << "" << std::setfill(' ') << "\n";
}
int main(){
    const int MAX_SUBJECTS=20;
    std::string studentName;
    std::cout<<format37<<"enter the name of the student"<<": ";
    getline(std::cin,studentName);
    int id;
    std::cout<<format37<<"enter the id of the student"<<": ";
    std::cin>>id;
    int gradeLevel;
    std::cout<<format37<<"enter the grade level of the student"<<": ";
    std::cin>>gradeLevel;
    std::string schoolName;
    std::cout<<format37<<"enter the name of the school"<<": ";
    std::cin.ignore(); // Clear the newline character from the input buffer
    getline(std::cin,schoolName);
    std::cout<<format37<<"enter the school year of the student"<<": ";
    std::string schoolYear;
    getline(std::cin,schoolYear);
    std::cout<<format37<<"enter the semester of the student"<<": ";
    std::string semester;
    getline(std::cin,semester);
    std::vector<std::string> subjects(MAX_SUBJECTS);
    std::vector<double> grades(MAX_SUBJECTS);
    int count_subjects=0;
    std::cout<<format37<<"enter the number of subjects"<<": ";
    std::cin>>count_subjects;
    if(count_subjects>MAX_SUBJECTS){
        std::cout<<"the number of subjects should not exceed "<<MAX_SUBJECTS<<std::endl;
        return 1;
    }
    for(int i=0; i<count_subjects; i++){
        std::string subjectPrompt="enter the name of subject "+std::to_string(i+1);
        std::cout<<format50<<subjectPrompt<<": ";
        std::cin.ignore(); // Clear the newline character from the input buffer
        getline(std::cin,subjects[i]);
        std::string gradePrompt="enter the grade of subject "+subjects[i];
        std::cout<<format50<<gradePrompt<<": ";
        std::cin>>grades[i];
    }
    std::cout<<"\n\n"<<std::endl;
    printDivider('=', 50);
    std::cout<<std::setw(15)<<""<<" STUDENT REPORTCARD "; 
    std::cout<<"\n"<<std::endl;
    std::cout<<std::setw(25-(schoolName.length())/2)<<""<<schoolName
            <<std::endl;
    printDivider('=', 50);
    std::cout<<format15<<"NAME"<<": "<<studentName<<std::endl
             <<format15<<"ID"<<": "<<id<<std::endl
             <<format15<<"Grade level"<<": "<<gradeLevel<<std::endl
             <<format15<<"School Year"<<": "<<schoolYear<<std::endl
             <<format15<<"Semester"<<": "<<semester<<"\n\n"<<std::endl;
    double total=0;
    std::cout<<format15<<"SUBJECT"<<format15<<"SCORE"<<format15<<"STATUS"<<std::endl;
    printDivider('-', 50);
    for(int i=0; i<count_subjects; i++){
        std::string pass_fail;
        if(grades[i]>=65){
            pass_fail="PASS";
        }
        else{
            pass_fail="FAIL";
        }
        std::cout<<format15<<subjects[i]<<format15<<grades[i]<<format15<<pass_fail<<std::endl;
        total+=grades[i];
    }
    printDivider('-', 50);
    std::cout<<std::endl;
    std::cout<<format15<<"Total"<<": "<<total<<std::endl;
    std::cout<<format15<<"Average"<<": "<<total/count_subjects<<std::endl;
    std::cout<<format15<<"GPA"<<": "<<total/count_subjects/25<<std::endl;
    std::cout<<"\n";
    std::cout<<format15<<"Remarks"<<": ";
    if(total/count_subjects>=75){
        std::cout<<"PASSED"<<std::endl;
    }
    else{
        std::cout<<"FAILED"<<std::endl;
    }
    printDivider('=', 50);
    std::cout<<std::setw(16)<<""<<"END OF REPORTCARD "
             <<std::endl;
    printDivider('=', 50);
    
             
    
    return 0;
 
}