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

  
