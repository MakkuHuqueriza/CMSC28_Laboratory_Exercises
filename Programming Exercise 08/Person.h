#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using std::string;

class Person{
    private:
        string Fname;  
        string Lname;  
        char Gender;   

    public:

        string EmailAdd;
        string CpNumber;

        Person(){}

        const string& getFname() const { return Fname; }

        const string& getLname() const { return Lname; }

        const char getGender() const { return Gender; }

        const string& getEmailAdd() const { return EmailAdd; }

        const string& getCpNumber() const { return CpNumber; }

        
        void setFname(const string& fname){ Fname = fname; }

        void setLname(const string& lname){ Lname = lname; }

        void setGender(const char gender){ Gender = gender; }

        void setEmailAdd(const string& email){ EmailAdd = email; }

        void setCpNumber(const string& cp){ CpNumber = cp; }
};

#endif