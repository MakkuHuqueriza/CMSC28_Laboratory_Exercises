#include <iostream>
#include "Person.h" // add Person.h as a library to this program
#include "Grade.h" // add Grades.h as a library to this program

using namespace std;

int main(){
    int a;
    char g;
    
    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;

    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);

    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);

    cout << "Age = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;
    cout << "\nThis is an example of method overloading: \n";
    cout << "Using view 1: \n";
    p.view();

    cout << "\n================================= USING NEW HEADER FILE =================================" << endl;
    
    Grades student1;

    float grade;
    string subjectName;
    
    cout << "\nInput grade: ";
    cin >> grade;
    student1.setGrade(grade);

    cout << "\nInput Subject Name: ";
    cin >> subjectName;
    student1.setSubjectname(subjectName);

    cout << "\nGrade: " << student1.getGrade();
    cout << "\nSubject Name: " << student1.getSubjectname();
    cout << "\nStatus: " << student1.validateScore() << endl;

    return 0;
}