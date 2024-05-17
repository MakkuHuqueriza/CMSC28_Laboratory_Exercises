#include <iostream>
#include <string>

using std::string;

class Person{
    protected:
        string Fname;
        string Lname;
        char Gender;

    public:
        Person(){}

        const string& getFname() const { return Fname; }
        const string& getLname() const { return Lname; }
        const char& getGender() const { return Gender; }

        void setFname(const string& fname){ Fname = fname; }
        void setLname(const string& lname){ Lname = lname; }
        void setGender(const char& gender){ Gender = gender; }

};