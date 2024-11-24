#include <iostream>
#include <cmath> // For abs

int countEvenDigits(int number) {
    int count = 0;

    // Handle negative numbers
    number = std::abs(number);

    // Iterate through each digit
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        if (digit % 2 == 0) {   // Check if the digit is even
            count++;
        }
        number /= 10; // Remove the last digit
    }

    return count;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "The number of even digits is 1 (0 is even)." << std::endl;
        return 0;
    }

    int evenCount = countEvenDigits(number);

    std::cout << "The number of even digits in " << number << " is " << evenCount << "." << std::endl;

    return 0;
}
