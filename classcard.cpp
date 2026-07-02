#include <iostream>
#include <string>
using namespace std;

int main() {
    const int STUDENTS = 10;
    string names[STUDENTS];
    int ids[STUDENTS];
    double marks[STUDENTS];
    int highestMark = marks[0];
    int lowestMark= marks[0];
    
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
    for(int i=0; i<STUDENTS; i++){
        if(marks[i]>highestMark){
            highestMark=marks[i];
        }
        if(marks[i]<lowestMark){
            lowestMark=marks[i];
        }
    }
    cout << "Highest Mark: " << highestMark << endl;
    cout << "Lowest Mark: " << lowestMark << endl;
    return 0;
}