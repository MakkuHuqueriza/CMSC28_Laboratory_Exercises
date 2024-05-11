/*Programming Exercise 05 - OOP 1 - MARK JAILY H. PEÑA*/

#include <iostream>
#include <cmath>
#define MAX 10

// Function prototypes
void setData(int nums[], int& size);
int getLargest(int nums[], int size);
int getSmallest(int nums[], int size);
double getAverage(int nums[], int size);
double getVariance(int nums[], int size);
double getStandardDeviation(int nums[], int size);
void getOutput(int largest, int smallest, double average, double variance, double standardDeviation);


//Main function
int main() {
    int nums[MAX];   
    int size = 0;   
    setData(nums, size);
   
    int largest = getLargest(nums, size);
    int smallest = getSmallest(nums, size);
    double average = getAverage(nums, size);
    double variance = getVariance(nums, size);
    double standardDeviation = getStandardDeviation(nums, size);

    getOutput(largest, smallest, average, variance, standardDeviation);

    return 0;
}

/**
 * Ask the user for inputs and store them in an array.
 * 
 * @param {Array<int>} nums - the array where the data will be stored
 * @param {int&} size - a reference variable to determine the size of the array 
 */
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
        if (input != 0 && size < MAX) {
            nums[size++] = input;   
        }
    } while (input != 0 && size < MAX);   
}

/**
 * Find the largest element in the array
 * 
 * @param {Array<int>} nums - the array where the data are stored
 * @param {int} size - a variable to determine the size of the array 
 * @return {int} The function returns the largest element in the array
 */
int getLargest(int nums[], int size) {
    int largest = nums[0];
    for (int i {1}; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

/**
 * Find the smallest element in the array
 * 
 * @param {Array<int>} nums - the array where the data are stored
 * @param {int} size - a variable to determine the size of the array 
 * @return {int} The function returns the smallest element in the array
 */
int getSmallest(int nums[], int size) {
    int smallest = nums[0];
    for (int i {1}; i < size; i++) { 
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}
/**
 * Calculate the average of the elements in the array
 * 
 * @param {Array<int>} nums - the array where the data are stored
 * @param {int} size - a variable to determine the size of the array 
 * @return {double} The function returns the summation of all the elements divided by the number of elements
 */
double getAverage(int nums[], int size) {
    double sum = 0;
    for (int i {0}; i < size; i++) {
        sum += nums[i];
    }
    return sum / size; 
}

/**
 * Calculate the variance of the elements in the array by getting the summation of the squared difference of 
 * each element and the average all over the size or the number of elements
 * 
 * @param {Array<int>} nums - the array where the data are stored
 * @param {int} size - a variable to determine the size of the array 
 * @return {double} The function returns variance of the array
 */
double getVariance(int nums[], int size) {
    double avg = getAverage(nums, size);
    double variance = 0;
    for (int i {0}; i < size; i++) {
        variance += pow((nums[i] - avg), 2);
    }
    return variance / size;
}
/**
 * Calculate the standard deviation of the elements in the array by getting the square root of the variance
 * of the array
 * 
 * @param {Array<int>} nums - the array where the data are stored
 * @param {int} size - a variable to determine the size of the array 
 * @return {double} The function returns the square root of the variance of the array
 */
double getStandardDeviation(int nums[], int size) {
    return sqrt(getVariance(nums, size)); 
}

/**
 * Print the results of each calculation
 * 
 * @param {int} largest - contains the largest value in the array
 * @param {int} smallest - contains the smallest value in the array
 * @param {double} average - contains the average of the array
 * @param {double} variance - contains the variance of the array
 * @param {double} standardDeviation - contains the standard deviation of the array
 */
void getOutput(int largest, int smallest, double average, double variance, double standardDeviation) {
    std::cout << std::endl;
    std::cout << "Calculations/Results:" << std::endl;
    std::cout << "Largest: " << largest << std::endl;
    std::cout << "Smallest: " << smallest << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Variance: " << variance << std::endl;
    std::cout << "Standard Deviation: " << standardDeviation << std::endl;
}

