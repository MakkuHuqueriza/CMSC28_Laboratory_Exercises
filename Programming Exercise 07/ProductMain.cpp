#include <iostream>
#include <string>
#include "ProductInventory.h"

using std::string;
using std::cin;
using std::cout;
using std::getline;
using std::endl;

int main() {

    // Display program details
    cout << "\n=================================================================================================================" << endl;
    cout << "                              OOP 3 Inheritance and Encapsulation - Programming Exercises 06"<< endl;;
    cout << "                                       Created by Mark Jaily H. Pena" << endl;
    cout << "                               Date done: 5/22/2024       Subject: CMSC 28" << endl << endl;
    cout << "Design a class hierarchy for managing products in a store's inventory, focusing on inheritance and encapsulation." << endl; 
    cout << "=================================================================================================================" << std::endl << std::endl; 
    
    // Variables to hold user input
    std::string name, brand, description, category, size, color, material, model, technicalSpecifications;
    double price;
    int quantity, warranty;

    // Create a Clothing object
    std::cout << "Enter details for the clothing item:\n";
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Brand: ";
    std::getline(std::cin, brand);
    std::cout << "Price: ";
    std::cin >> price;
    std::cout << "Quantity: ";
    std::cin >> quantity;
    std::cin.ignore();  // clear the newline character from the input buffer
    std::cout << "Description: ";
    std::getline(std::cin, description);
    std::cout << "Category: ";
    std::getline(std::cin, category);
    std::cout << "Size: ";
    std::getline(std::cin, size);
    std::cout << "Color: ";
    std::getline(std::cin, color);
    std::cout << "Material: ";
    std::getline(std::cin, material);

    Clothing shirt;
    shirt.setName(name);
    shirt.setBrand(brand);
    shirt.setPrice(price);
    shirt.setQuantity(quantity);
    shirt.setDescription(description);
    shirt.setCategory(category);
    shirt.setSize(size);
    shirt.setColor(color);
    shirt.setMaterial(material);

    // Create an Electronics object
    std::cout << "\nEnter details for the electronic item:\n";
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Brand: ";
    std::getline(std::cin, brand);
    std::cout << "Price: ";
    std::cin >> price;
    std::cout << "Quantity: ";
    std::cin >> quantity;
    std::cin.ignore();  // clear the newline character from the input buffer
    std::cout << "Description: ";
    std::getline(std::cin, description);
    std::cout << "Category: ";
    std::getline(std::cin, category);
    std::cout << "Model: ";
    std::getline(std::cin, model);
    std::cout << "Warranty: ";
    std::cin >> warranty;
    std::cin.ignore();  // clear the newline character from the input buffer
    std::cout << "Technical Specifications: ";
    std::getline(std::cin, technicalSpecifications);

    Electronics phone;
    phone.setName(name);
    phone.setBrand(brand);
    phone.setPrice(price);
    phone.setQuantity(quantity);
    phone.setDescription(description);
    phone.setCategory(category);
    phone.setModel(model);
    phone.setWarranty(warranty);
    phone.setTechnicalSpecifications(technicalSpecifications);

    // Print details of each product
    cout << "\n------------------------------------------------------------\n";
    cout << "Details of the products:\n";
    shirt.print();
    cout << endl;
    phone.print();

    return 0;
}