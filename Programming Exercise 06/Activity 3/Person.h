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

        string getFname(){ return Fname; }
        string getLname(){ return Lname; }
        char getGender(){ return Gender; }

        void setFname(string fname){ Fname = fname; }
        void setLname(string lname){ Lname = lname; }
        void setGender(char gender){ Gender = gender; }

};