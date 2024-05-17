#include <iostream>
#include <string>

using std::string;

/**
 * @class Person
 * A class that represents a person.
 * 
 * The Person class represents a person with first name, last name, and gender.
 */
class Person{
    private:
        string Fname;  ///< First name of the person
        string Lname;  ///< Last name of the person
        char Gender;   ///< Gender of the person

    public:
        /**
         * Default constructor
         */
        Person(){}

        /**
         * Returns the first name of the person
         * 
         * @return {const string&} - First name of the person
         */
        const string& getFname() const { return Fname; }

        /**
         * Returns the last name of the person
         * 
         * @return {const string&} - Last name of the person
         */
        const string& getLname() const { return Lname; }

        /**
         * Returns the gender of the person
         * 
         * @return {const char&} - Gender of the person
         */
        const char& getGender() const { return Gender; }

        /**
         * Sets the first name of the person
         * 
         * @param {const string&} fname - First name of the person
         */
        void setFname(const string& fname){ Fname = fname; }

        /**
         * Sets the last name of the person
         * 
         * @param {const string&} lname - Last name of the person
         */
        void setLname(const string& lname){ Lname = lname; }

        /**
         * Sets the gender of the person
         * 
         * @param {const char&} gender - Gender of the person
         */
        void setGender(const char& gender){ Gender = gender; }

};