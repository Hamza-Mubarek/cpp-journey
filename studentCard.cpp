#include <iostream>
#include <vector>
#include <iomanip>
int main(){
    const int MAX_SUBJECTS=20;
    std::string studentName;
    std::cout<<"enter the name of the student: ";
    getline(std::cin,studentName);
    int id;
    std::cout<<"enter the id of the student: ";
    std::cin>>id;
    int gradeLevel;
    std::cout<<"enter the grade level of the student: ";
    std::cin>>gradeLevel;
    std::string schoolName;
    std::cout<<"enter the name of the school: ";
    std::cin.ignore(); // Clear the newline character from the input buffer
    getline(std::cin,schoolName);
    std::cout<<"enter the school year of the student: ";
    std::string schoolYear;
    getline(std::cin,schoolYear);
    std::cout<<"enter the semester of the student: ";
    std::string semester;
    getline(std::cin,semester);
    std::vector<std::string> subjects(MAX_SUBJECTS);
    std::vector<double> grades(MAX_SUBJECTS);
    int count_subjects=0;
    std::cout<<"enter the number of subjects: ";
    std::cin>>count_subjects;
    if(count_subjects>MAX_SUBJECTS){
        std::cout<<"the number of subjects should not exceed "<<MAX_SUBJECTS<<std::endl;
        return 1;
    }
    for(int i=0; i<count_subjects; i++){
        std::cout<<"enter the name of subject "<<i+1<<": ";
        std::cin.ignore(); // Clear the newline character from the input buffer
        getline(std::cin,subjects[i]);
        std::cout<<"enter the grade  of subject "<<subjects[i]<<": ";
        std::cin>>grades[i];
    }
    std::cout<<"\n\n"<<std::endl;
    std::cout<<"================================= STUDENT REPORTCARD " 
             <<"=================================";
    std::cout<<"\n"<<std::endl;
    std::cout<<"================================= "<<schoolName
             <<" ================================"
             <<std::endl;
    std::cout<<"NAME : "<<studentName<<std::endl
             <<"ID : "<<id<<std::endl
             <<"Grade level : "<<gradeLevel<<std::endl
             <<"School Year : "<<schoolYear<<std::endl
             <<"Semester : "<<semester<<"\n\n"<<std::endl;
    double total=0;
    std::cout<<std::left<<std::setw(25)<<"SUBJECT"<<std::setw(5)<<"SCORE"<<std::setw(5)<<"STATUS"<<std::endl;
    for(int i=0; i<count_subjects; i++){
        std::string pass_fail;
        if(grades[i]>=65){
            pass_fail="PASS";
        }
        else{
            pass_fail="FAIL";
        }
        std::cout<<std::left<<std::setw(25)<<subjects[i]<<std::setw(5)<<grades[i]<<std::setw(5)<<pass_fail<<std::endl;
        total+=grades[i];
    }
    std::cout<<"\n\n"<<std::endl;
    std::cout<<"Total: "<<total<<std::endl;
    std::cout<<"Average: "<<total/count_subjects<<std::endl;
    std::cout<<"GPA: "<<total/count_subjects/25<<std::endl;
    std::cout<<"\n\n"<<std::endl;
    std::cout<<"Remarks: ";
    if(total/count_subjects>=75){
        std::cout<<"PASSED"<<std::endl;
    }
    else{
        std::cout<<"FAILED"<<std::endl;
    }
    std::cout<<"================================= END OF REPORTCARD "
             <<"================================="<<std::endl;
    
             
    
    return 0;
}  
