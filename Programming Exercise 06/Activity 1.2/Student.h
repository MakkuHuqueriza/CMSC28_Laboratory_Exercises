#include <iostream>
#include <string>

using std::string;

class Student{

    //Private members
    private:
        string FirstName;
        string LastName;
        int StudentNumber;
    
    public:
        //Constructor
        Student(string firstname, string lastname, int studentnumber)
        : FirstName(firstname), LastName(lastname), StudentNumber(studentnumber){}

        // Member function that displays all attributes
        void displayMembers(){
            std::cout << std::endl;
            std::cout << "Firstname: " << FirstName << std::endl;
            std::cout << "Lastname: " << LastName << std::endl;
            std::cout << "Student Number: " << StudentNumber << std::endl;
        }
};