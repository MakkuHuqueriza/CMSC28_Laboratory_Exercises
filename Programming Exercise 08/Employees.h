#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"

using std::string;

// Class definition for Employees which inherits from Person
class Employees : public Person {
    private: 
        string EmpNum;  // Employee number

    public:
        string Position;  // Position of the employee
        string Office;    // Office location of the employee
        float Salary;     // Salary of the employee
    
        // Default constructor
        Employees() {}

        // Getters
        const string& getEmpNum() const { return EmpNum; }
        const string& getPosition() const { return Position; }
        const string& getOffice() const { return Office; }
        const float getSalary() const { return Salary; }

        // Setters
        void setEmpNum(const string& empNum){ EmpNum = empNum; }
        void setPosition(const string& position){ Position = position; }
        void setOffice(const string& office){ Office = office; }
        void setSalary(const float salary){ Salary = salary; }
};
#endif