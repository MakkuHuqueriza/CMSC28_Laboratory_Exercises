#include <iostream>

using std::string;

class Grades{

    private:
        float Grade;
        string SubjectName;

    public:
        Grades(){}

        //Getters
        float getGrade(){ return Grade; }
        string getSubjectname(){ return SubjectName; }

        //Setters
        void setGrade(float grade){ Grade = grade; }
        void setSubjectname(string subjectname){ SubjectName = subjectname; }

        //Method to validate score
        string validateScore(){
            if(Grade > 100 || Grade < 0)
                return "Invalid Grade";
            else if(Grade < 60)
                return "Sorry, you have a failing grade";
            else 
                return "Congratulations! You have a passing grade";
        }   
};