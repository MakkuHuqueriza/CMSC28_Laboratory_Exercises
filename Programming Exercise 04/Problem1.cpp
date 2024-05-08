/*Programming Exercise 04 - C++ Warm Up - MARK JAILY H. PEÑA*/

#include <iostream>

// Function prototypes
void progdescription(); // Function to display program description
void readdata(int *a, int *b, int *c); // Function to read input data from user
int getsmall(int a, int b, int c); // Function to find the smallest number among three
int getlarge(int a, int b, int c); // Function to find the largest number among three
void showdata(int a, int b, int c, int smallval, int largeval, int difference); // Function to display input data and computed results

int main(){
    // Variable declarations
    int x,y,z;
    int smallval, largeval, diff;

    progdescription(); // Display program description   
    readdata(&x, &y, &z); // Read input data
    smallval = getsmall(x, y, z); // Compute smallest number
    largeval = getlarge(x, y, z); // Compute largest number
    diff = largeval - smallval; // Compute difference between largest and smallest numbers
    showdata(x, y, z, smallval, largeval, diff); // Display input data and computed results
    
    return 0;
}

// Function to display program description
void progdescription(){
    std::cout << "\n=================================================================================================================" << std::endl;
    std::cout << "                              Teaser Problem - Programming Exercises 04"<< std::endl;;
    std::cout << "                                       Created by Mark Jaily H. Pena" << std::endl;
    std::cout << "                               Date done: 4/24/2024       Subject: CMSC 28" << std::endl << std::endl;
    std::cout << "This program asks the user to input three numbers(integer) (x, y, z), and find the highest and lowest number, and \noutput their difference. " << std::endl;
    std::cout << "=================================================================================================================" << std::endl << std::endl; 
}

// Function to read input data from user
void readdata(int *a, int *b, int *c){
    std::cout << "Input first number: ";
    std::cin >> *a;
    std::cout << "Input second number: ";
    std::cin >> *b;
    std::cout << "Input third number: ";
    std::cin >> *c; 
}

// Function to find the smallest number among three
int getsmall(int a, int b, int c) {
    return (a < b && a < c) ? a : (b < c ? b : c);
}


// Function to find the largest number among three
int getlarge(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}


// Function to display input data and computed results
void showdata(int a, int b, int c, int smallval, int largeval, int difference){
    std::cout << "\n=================================================================================================================" << std::endl;
    std::cout << "\t\t\t\t\tDISPLAYING VALUES" << std::endl << std::endl;
    std::cout << "First Number: " << a << std::endl;
    std::cout << "Second Number: " << b << std::endl;
    std::cout << "Third Number: " << c << std::endl;
    std::cout << "Smallest Number: " << smallval << std::endl;
    std::cout << "Highest Number: " << largeval << std::endl;
    std::cout << "Difference between smallest and highest number: " << difference  << std::endl;
    std::cout << "=================================================================================================================" << std::endl;
}


