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
    cout << "                              OOP 3 Inheritance and Encapsulation - Programming Exercises 07"<< endl;;
    cout << "                                       Created by Mark Jaily H. Pena" << endl;
    cout << "                               Date done: 5/22/2024       Subject: CMSC 28" << endl << endl;
    cout << "Design a class hierarchy for managing products in a store's inventory, focusing on inheritance and encapsulation." << endl; 
    cout << "=================================================================================================================" << endl << endl; 
    
    // Variables to hold user input
    string name, brand, description, category, size, color, material, model, technicalSpecifications;
    double price;
    int quantity, warranty;

    cout << "Enter details for the clothing item:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Brand: ";
    getline(cin, brand);
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore();  // clear the newline character from the input buffer
    cout << "Description: ";
    getline(cin, description);
    cout << "Category: ";
    getline(cin, category);
    cout << "Size: ";
    getline(cin, size);
    cout << "Color: ";
    getline(cin, color);
    cout << "Material: ";
    getline(cin, material);

    // Create a Clothing object
    Clothing shirt;

    // Set the values of the object
    shirt.setName(name);
    shirt.setBrand(brand);
    shirt.setPrice(price);
    shirt.setQuantity(quantity);
    shirt.setDescription(description);
    shirt.setCategory(category);
    shirt.setSize(size);
    shirt.setColor(color);
    shirt.setMaterial(material);

    cout << "\nEnter details for the electronic item:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Brand: ";
    getline(cin, brand);
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore();  // clear the newline character from the input buffer
    cout << "Description: ";
    getline(cin, description);
    cout << "Category: ";
    getline(cin, category);
    cout << "Model: ";
    getline(cin, model);
    cout << "Warranty: ";
    cin >> warranty;
    cin.ignore();  // clear the newline character from the input buffer
    cout << "Technical Specifications: ";
    getline(cin, technicalSpecifications);

    // Create an Electronics object
    Electronics phone;

    // Set the values of the object
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