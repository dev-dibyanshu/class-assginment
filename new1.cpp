#include <iostream>
 
// Function to perform division
double divideNumbers(int numerator, int denominator) { 
    if (denominator == 0) {
        // Throw an exception for division by zero
        throw std::runtime_error("Error: Division by zero");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    try {
        // Attempt to perform division within the try block
        int numerator, denominator;
        
        std::cout << "Enter numerator: ";
        std::cin >> numerator;

        std::cout << "Enter denominator: ";
        std::cin >> denominator;

        // Call the function that may throw an exception
        double result = divideNumbers(numerator, denominator);

        // Display the result if no exception occurred
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        // Catch block for handling exceptions of type std::runtime_error
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (...) {
        // Catch block for handling other types of exceptions
        std::cerr << "An unknown exception occurred." << std::endl;
    }

    // Rest of the program continues after handling the exception
    std::cout << "Program continues after exception handling." << std::endl;

    return 0;
}
