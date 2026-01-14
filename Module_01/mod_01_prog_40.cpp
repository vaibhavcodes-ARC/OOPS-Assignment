// Program 40: Program using structure to store student details
#include <iostream>

using namespace std;
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    cin.getline(s.name, 50);
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}



