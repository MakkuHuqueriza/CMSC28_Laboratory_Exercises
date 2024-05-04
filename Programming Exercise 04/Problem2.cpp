/*Programming Exercise 04 - C++ Warm Up - MARK JAILY H. PEÑA*/

#include <iostream>

// Function prototypes
void progdescription(); // Function to display program description
int readdata(int num); // Function to read input integer from user
int binaryconvert(int num); // Function to convert decimal integer to binary
void showdata(int num, int binaryNumber); // Function to display original decimal value and its binary equivalent

int main(){
    // Variable declarations
    int number;
    int binaryNumber;

    progdescription(); // Display program description
    number = readdata(number); // Read input integer
    binaryNumber = binaryconvert(number); // Convert decimal integer to binary
    showdata(number, binaryNumber); // Display original decimal value and its binary equivalent

    return 0;
}

// Function to display program description
void progdescription(){
    std::cout << "\n=================================================================================================================" << std::endl;
    std::cout << "                              Boredom Reliever Problem - Programming Exercises 04"<< std::endl;;
    std::cout << "                                       Created by Mark Jaily H. Pena" << std::endl;
    std::cout << "                               Date done: 4/24/2024       Subject: CMSC 57" << std::endl << std::endl;
    std::cout << "This program asks the user to input an integer and convert this number to its binary equivalent." << std::endl;
    std::cout << "=================================================================================================================" << std::endl << std::endl; 
}

// Function to read input integer from user
int readdata(int num){
    std::cout << "Input an integer: ";
    std::cin >> num;

    return num;
}

// Function to convert a decimal number to binary
int binaryconvert(int num){
    // Initialize variables for binary representation and base
    int base = 1;
    int binaryNumber = 0;

    // Iterate until the decimal number is greater than 0
    while(num > 0){
        // Accumulate binary representation by adding remainders multiplied by base
        binaryNumber += (num % 2) * base;
        // Multiply base by 10 to move to the next digit
        base *= 10;
        // Update decimal number by dividing by 2
        num /= 2;
    }   
    
    // Return the binary representation
    return binaryNumber;
}


// Function to display original decimal value and its binary equivalent
void showdata(int num, int binaryNumber){
    std::cout << "\n=================================================================================================================" << std::endl;
    std::cout << "\t\t\t\t\tDISPLAYING VALUES" << std::endl << std::endl;
    std::cout << "Original Value(Decimal): " << num << std::endl;
    std::cout << "Binary Equivalent: " << binaryNumber << std::endl;
    std::cout << "=================================================================================================================" << std::endl;
}