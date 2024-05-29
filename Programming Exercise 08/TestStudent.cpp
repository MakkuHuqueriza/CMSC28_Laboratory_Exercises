#include <iostream>
#include "Student.h"

using std::string;
using std::cin;
using std::cout;
using std::getline;
using std::endl;

int main() {

    string fname, lname, emailadd, cpnumber, studentnum, course, department, college;
    char gender;

    cout << "\n=================================================================================================================" << endl;
    cout << "                              OOP 4 Inheritance - Programming Exercises 08"<< endl;;
    cout << "                                       Created by Mark Jaily H. Pena" << endl;
    cout << "                               Date done: 5/29/2024       Subject: CMSC 28" << endl << endl;
    cout << "This program gathers user inputs to create a personalized welcome message for new UP Mindanao students, providing" << endl;
    cout << "essential details and encouraging campus engagement." << endl;
    cout << "=================================================================================================================" << endl << endl; 

    Student student;

    cout << "Enter student's first name: ";
    getline(cin, fname);
    cout << "Enter student's last name: ";
    getline(cin, lname);
    cout << "Enter student's gender: ";
    cin >> gender;
    cin.ignore();

    cout << "Enter student's email address: ";
    cin >> emailadd;

    cout << "Enter student's contact number: ";
    cin >> cpnumber;

    cout << "Enter student's student number: ";
    cin >> studentnum;

    cin.ignore();

    cout << "Enter student's course: ";
    getline(cin, course);

    cout << "Enter student's department: ";
    getline(cin, department);
    cout << "Enter student's college: ";
    getline(cin, college);


    student.setFname(fname);
    student.setLname(lname);
    student.setGender(gender);
    student.setEmailAdd(emailadd);
    student.setCpNumber(cpnumber);
    student.setStudentNum(studentnum);
    student.setCourse(course);
    student.setDepartment(department);
    student.setCollege(college);
    
    cout << "\n=================================================================================================================" << endl;
    cout << "Dear " << student.getFname() << " " << student.getLname() << "," << endl << endl;
    cout << "Welcome to UP Mindanao! Congratulations on your admission to the " << student.getCourse() 
         << " program under the " << student.getDepartment() << " in the " << student.getCollege() << "." << endl;
    cout << "Your student number is " << student.getStudentNum() << ". ";
    cout << "Please be informed that your email address is " << student.getEmailAdd() << " and your contact number is " 
         << student.getCpNumber() << "." << endl;
    cout << "As noted, your gender is " << student.getGender() << "." << endl << endl;

    cout << "We are thrilled to have you join our community of scholars and future leaders. As you embark on this academic journey, "
         << "we encourage you to take advantage of the many resources and opportunities available to you. Get involved in campus activities, "
         << "engage with your professors, and make lasting friendships." << endl << endl;

    cout << "The journey ahead will be both challenging and rewarding, and we are here to support you every step of the way. "
         << "We look forward to seeing you in the campus soon and witnessing your growth and achievements." << endl << endl;

    cout << "Best regards," << endl << endl;
    cout << "The UP Mindanao Administration" << endl;
    cout << "=================================================================================================================" << endl;

    return 0;

}