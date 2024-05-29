#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using std::string;

// Class definition for a Person
class Person {
    private:
        string Fname;  // First name of the person
        string Lname;  // Last name of the person
        char Gender;   // Gender of the person

    public:
        string EmailAdd;  // Email address of the person
        string CpNumber;  // Contact number of the person

        // Default constructor
        Person() {}

        // Getters
        const string& getFname() const { return Fname; }
        const string& getLname() const { return Lname; }
        const char getGender() const { return Gender; }
        const string& getEmailAdd() const { return EmailAdd; }
        const string& getCpNumber() const { return CpNumber; }

        // Setters
        void setFname(const string& fname) { Fname = fname; }
        void setLname(const string& lname) { Lname = lname; }
        void setGender(const char gender) { Gender = gender; }
        void setEmailAdd(const string& email) { EmailAdd = email; }
        void setCpNumber(const string& cp) { CpNumber = cp; }
};
#endif
