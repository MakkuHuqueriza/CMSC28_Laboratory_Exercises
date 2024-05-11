#include <iostream>
#include "Book.h"

int main(){
    Book book1("Harry Potter and the Sorcerer's Stone", "J. K. Rowling", "978-0-7475-3269-9", "Bloomsbury");

    std::cout << std::endl;
    std::cout << book1.getTitle() << std::endl;
    std::cout << book1.getAuthor() << std::endl;
    std::cout << book1.getISBN() << std::endl;
    std::cout << book1.getPublisher() << std::endl;

    book1.setTitle("It");
    book1.setAuthor("Stephen King");
    book1.setISBN("0-670-81302-8");
    book1.setPublisher("Viking");

    std::cout << std::endl;
    std::cout << book1.getTitle() << std::endl;
    std::cout << book1.getAuthor() << std::endl;
    std::cout << book1.getISBN() << std::endl;
    std::cout << book1.getPublisher() << std::endl;

}