/*Programming Exercise 05 - OOP 1 - MARK JAILY H. PEÑA*/

#include <iostream>
#include <cmath>

// Function prototypes
void setData(int nums[], int& size);
int getLargest(int nums[], int size);
int getSmallest(int nums[], int size);
double getAverage(int nums[], int size);
double getVariance(int nums[], int size);
double getStandardDeviation(int nums[], int size);
void getOutput(int largest, int smallest, double average, double variance, double standardDeviation);

int main() {
    int nums[10];   // Array to store integers
    int size = 0;   // Size of the array
    setData(nums, size); // Call the setData() function to input data from the user

    // Calculate statistical values
    int largest = getLargest(nums, size);
    int smallest = getSmallest(nums, size);
    double average = getAverage(nums, size);
    double variance = getVariance(nums, size);
    double standardDeviation = getStandardDeviation(nums, size);

    // Call the getOutput() function to display the analysis results
    getOutput(largest, smallest, average, variance, standardDeviation);

    return 0;
}

void setData(int nums[], int& size) {
    std::cout << "\n=================================================================================================================" << std::endl;
    std::cout << "                                           Programming Exercises 05"<< std::endl;;
    std::cout << "                                       Submitted by Mark Jaily H. Pena" << std::endl;
    std::cout << std::endl;
    std::cout << "This program will ask the user to input various numbers (positive or negative but not zero) and perform" << std::endl;
    std::cout << "basic statistics on these numbers." << std::endl;
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

// Function to find the largest element in the array
int getLargest(int nums[], int size) {
    int largest = nums[0];
    for (int i = 1; i < size; i++) { // Compare each elements to check which is larger and store it in the largest variable
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

// Function to find the smallest element in the array
int getSmallest(int nums[], int size) {
    int smallest = nums[0];
    for (int i = 1; i < size; i++) { // Compare each elements to check which is smaller and store it in the smallest variable
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}

// Function to calculate the average of the elements in the array
double getAverage(int nums[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    return sum / size; // Summation of all the elements divided by the number of elements
}

// Function to calculate the variance of the elements in the array
double getVariance(int nums[], int size) {
    double avg = getAverage(nums, size);
    double variance = 0;
    for (int i = 0; i < size; i++) {
        variance += pow((nums[i] - avg), 2); // Summation of the squared difference of each element and the average
    }
    return variance / size;
}

// Function to calculate the standard deviation of the elements in the array
double getStandardDeviation(int nums[], int size) {
    return sqrt(getVariance(nums, size)); // Square root ofthe variance is equal to standard deviation
}

// Function to output the results
void getOutput(int largest, int smallest, double average, double variance, double standardDeviation) {
    std::cout << std::endl;
    std::cout << "Calculations/Results:" << std::endl;
    std::cout << "Largest: " << largest << std::endl;
    std::cout << "Smallest: " << smallest << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Variance: " << variance << std::endl;
    std::cout << "Standard Deviation: " << standardDeviation << std::endl;
}

