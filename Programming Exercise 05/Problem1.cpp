#include <iostream>
#include <cmath>

class Statistics {
private:
    int nums[10];   // Array to store integers
    int size;       // Size of the array
public:
    Statistics() {
        size = 0;   // Initialize size to 0
    }

    // Method to input data from user
    void setData() {

        //Program description
        std::cout << "\n=================================================================================================================" << std::endl;
        std::cout << "                                           Programming Exercises 05"<< std::endl;;
        std::cout << "                                       Created by Mark Jaily H. Pena" << std::endl;
        std::cout << "                               Date done: 5/9/2024       Subject: CMSC 28" << std::endl << std::endl;
        std::cout << "This program prompts the user for integers, stores them in an array until 0 or the array's limit, and computes" << std::endl;
        std::cout << "the largest, smallest, average, standard deviation, and variance values using user-defined functions." << std::endl;
        std::cout << "=================================================================================================================" << std::endl << std::endl; 

        std::cout << "Enter integers (maximum 10, terminate with 0, add space in between): ";
        int input;
        do {
            std::cin >> input;
            if (input != 0 && size < 10) {
                nums[size++] = input;   // Store input in array and increment size
            }
        } while (input != 0 && size < 10);   // Repeat until 0 is entered or array is full
    }

    // Method to find the largest element in the array
    int getLargest() {
        int largest = nums[0];
        for (int i = 1; i < size; i++) { // Compare each elements to check which is larger and store it in the largest variable
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }

    // Method to find the smallest element in the array
    int getSmallest() {
        int smallest = nums[0];
        for (int i = 1; i < size; i++) { // Compare each elements to check which is smaller and store it in the smallest variable
            if (nums[i] < smallest) {
                smallest = nums[i];
            }
        }
        return smallest;
    }

    // Method to calculate the average of the elements in the array
    double getAverage() {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += nums[i];
        }
        return sum / size; // Summation of all the elements divided by the number of elements
    }

    // Method to calculate the variance of the elements in the array
    double getVariance() {
        double avg = getAverage();
        double variance = 0;
        for (int i = 0; i < size; i++) { 
            variance += pow((nums[i] - avg), 2); // Summation of the squared difference of each element and the average
        }
        return variance / size; 
    }

    // Method to calculate the standard deviation of the elements in the array
    double getStandardDeviation() {
        return sqrt(getVariance()); // Square root ofthe variance is equal to standard deviation
    }

    // Method to output the results
    void getOutput() {
        std::cout << std::endl;
        std::cout << "Calculations/Reults:" << std::endl;
        std::cout << "Largest: " << getLargest() << std::endl;
        std::cout << "Smallest: " << getSmallest() << std::endl;
        std::cout << "Average: " << getAverage() << std::endl;
        std::cout << "Variance: " << getVariance() << std::endl;
        std::cout << "Standard Deviation: " << getStandardDeviation() << std::endl;
    }
};

int main() {
    Statistics analyzer; // Create an instance of the Statistics class
    analyzer.setData(); // Call the setData() method to input data from the user
    analyzer.getOutput(); // Call the getOutput() method to display the analysis results
    return 0;
}
