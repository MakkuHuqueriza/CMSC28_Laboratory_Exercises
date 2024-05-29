#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"

using std::string;

class Student : public Person {

    private:
        string StudentNum;

    public:
    
        string Course;
        string Department;
        string College;

        Student(){} 

        const string& getStudentNum() const { return StudentNum; }

        const string& getCourse() const { return Course; }

        const string& getDepartment() const { return Department; }

        const string& getCollege() const { return College; }

        void setStudentNum(const string& studentNum){ StudentNum = studentNum; }

        void setCourse(const string& course){ Course = course; }

        void setDepartment(const string& department){ Department = department; }

        void setCollege(const string& college){ College = college; }
};

#endif