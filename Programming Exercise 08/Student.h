#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"

using std::string;

// Class definition for Student which inherits from Person
class Student : public Person {
    private:
        string StudentNum;  // Student number

    public:
        string Course;      // Course the student is enrolled in
        string Department;  // Department of the student
        string College;     // College of the student

        // Default constructor
        Student() {}

        // Getters
        const string& getStudentNum() const { return StudentNum; }
        const string& getCourse() const { return Course; }
        const string& getDepartment() const { return Department; }
        const string& getCollege() const { return College; }

        // Setters
        void setStudentNum(const string& studentNum){ StudentNum = studentNum; }
        void setCourse(const string& course){ Course = course; }
        void setDepartment(const string& department){ Department = department; }
        void setCollege(const string& college){ College = college; }
};

#endif