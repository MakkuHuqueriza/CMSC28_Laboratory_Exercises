#include <iostream>
#include "Book.h"

int main(){ // Define the main function

    // Create an instance of the Book class with initial details
    Book book1("Harry Potter and the Sorcerer's Stone", "J. K. Rowling", "978-0-7475-3269-9", "Bloomsbury");

    // Output the initial book details
    std::cout << std::endl;
    std::cout << "Book #1" << std::endl;
    std::cout << "Title: " << book1.getTitle() << std::endl;
    std::cout << "Author: " << book1.getAuthor() << std::endl;
    std::cout << "ISBN: " << book1.getISBN() << std::endl;
    std::cout << "Publisher: " << book1.getPublisher() << std::endl;

    // Modify the book details using setter functions
    book1.setTitle("It");
    book1.setAuthor("Stephen King");
    book1.setISBN("0-670-81302-8");
    book1.setPublisher("Viking");

    // Output the modified book details
    std::cout << std::endl;
    std::cout << "Book #2" << std::endl;
    std::cout << "Title: " << book1.getTitle() << std::endl;
    std::cout << "Author: " << book1.getAuthor() << std::endl;
    std::cout << "ISBN: " << book1.getISBN() << std::endl;
    std::cout << "Publisher: " << book1.getPublisher() << std::endl;

}