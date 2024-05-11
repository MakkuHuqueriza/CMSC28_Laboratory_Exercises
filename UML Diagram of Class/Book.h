#include <iostream> // Include necessary header for input and output operations
#include <string>

class Book { // Define a class named Book

    private: // Define private access specifier for member variables
        // Member variables to store book details
        std::string Title;
        std::string Author;
        std::string ISBN;
        std::string Publisher;

    public: // Define public access specifier for member functions
    
        // Constructor to initialize member variables
        Book(std::string title, std::string author, std::string isbn, std::string publisher)
        : Title(title), Author(author), ISBN(isbn), Publisher(publisher){}   

        // Getter functions to retrieve book details
        std::string getTitle(){ return Title; }
        std::string getAuthor(){ return Author; }
        std::string getISBN(){ return ISBN; }
        std::string getPublisher(){ return Publisher; }

        // Setter functions to modify book details
        void setTitle(std::string bktitle){ Title = bktitle; }
        void setAuthor(std::string bkauthor){ Author = bkauthor; }
        void setISBN(std::string bkisbn){ ISBN = bkisbn; }
        void setPublisher(std::string bkpublisher){ Publisher = bkpublisher; }

};