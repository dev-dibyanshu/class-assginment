#include <iostream>

template <typename T>
T findMax(const T array[], int size) {
    if (size <= 0) {
        // Handle the case when the array is empty
        std::cerr << "Error: Array is empty." << std::endl;
        return T();
    }

    T maxVal = array[0];  // Initialize maxVal with the first element

    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];  // Update maxVal if a larger element is found
        }
    }

    return maxVal;
}

int main() {
    // Example usage with an array of integers
    int intArray[] = {3, 7, 1, 9, 4};
    int intMax = findMax(intArray, 5);
    std::cout << "Maximum value in intArray: " << intMax << std::endl;

    // Example usage with an array of doubles
    double doubleArray[] = {2.5, 1.7, 3.2, 0.8};
    double doubleMax = findMax(doubleArray, 4);
    std::cout << "Maximum value in doubleArray: " << doubleMax << std::endl;

    // Example usage with an array of characters
    char charArray[] = {'a', 'Z', 'c', 'B'};
    char charMax = findMax(charArray, 4);
    std::cout << "Maximum value in charArray: " << charMax << std::endl;

    return 0;
}
