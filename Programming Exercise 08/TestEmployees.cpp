#include <iostream>
#include <iomanip>
#include "Employees.h"

using std::string;
using std::cin;
using std::cout;
using std::getline;
using std::endl;

int main() {

    string fname, lname, emailadd, cpnumber, empnum, position, office;
    char gender;
    float salary;

    cout << "\n=================================================================================================================" << endl;
    cout << "                              OOP 4 Inheritance - Programming Exercises 08" << endl;
    cout << "                                       Created by Mark Jaily H. Pena" << endl;
    cout << "                               Date done: 5/29/2024       Subject: CMSC 28" << endl << endl;
    cout << "This program gathers user inputs to create a personalized welcome message for new UP Mindanao employees, providing" << endl;
    cout << "essential details and encouraging workplace engagement." << endl;
    cout << "=================================================================================================================" << endl << endl; 

    Employees employee;

    cout << "Enter employee's first name: ";
    getline(cin, fname);
    cout << "Enter employee's last name: ";
    getline(cin, lname);
    cout << "Enter employee's gender: ";
    cin >> gender;
    cin.ignore();

    cout << "Enter employee's email address: ";
    cin >> emailadd;

    cout << "Enter employee's contact number: ";
    cin >> cpnumber;

    cout << "Enter employee's employee number: ";
    cin >> empnum;

    cin.ignore();

    cout << "Enter employee's position: ";
    getline(cin, position);

    cout << "Enter employee's office: ";
    getline(cin, office);

    cout << "Enter employee's salary: ";
    cin >> salary;

    employee.setFname(fname);
    employee.setLname(lname);
    employee.setGender(gender);
    employee.setEmailAdd(emailadd);
    employee.setCpNumber(cpnumber);
    employee.setEmpNum(empnum);
    employee.setPosition(position);
    employee.setOffice(office);
    employee.setSalary(salary);

    cout << "\n=================================================================================================================" << endl;
    cout << "Dear " << employee.getFname() << " " << employee.getLname() << "," << endl << endl;
    cout << "Welcome to UP Mindanao! Congratulations on your appointment as " << employee.getPosition() 
         << " in the " << employee.getOffice() << "." << endl;
    cout << "Your employee number is " << employee.getEmpNum() << ". ";
    cout << "Please be informed that your email address is " << employee.getEmailAdd() << " and your contact number is " 
         << employee.getCpNumber() << "." << endl;
    cout << "As noted, your gender is " << employee.getGender() << " and your salary is Php " << std::fixed << std::setprecision(2) << employee.getSalary() << "." << endl << endl;

    cout << "We are excited to have you join our team. As you start your journey with us, we encourage you to take advantage of the many resources and opportunities available. "
         << "Engage with your colleagues, participate in office activities, and build lasting professional relationships." << endl << endl;

    cout << "The journey ahead will be both challenging and rewarding, and we are here to support you every step of the way. "
         << "We look forward to seeing your contributions and achievements." << endl << endl;

    cout << "Best regards," << endl << endl;
    cout << "The UP Mindanao Administration" << endl;
    cout << "=================================================================================================================" << endl;

    return 0;
}
