#include <iostream>
#include <cmath> // For abs()

int sumOddDigits(int number) {
    int sum = 0;

    // Handle negative numbers by taking the absolute value
    number = std::abs(number);

    // Process each digit
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        if (digit % 2 != 0) {   // Check if the digit is odd
            sum += digit;
        }
        number /= 10; // Remove the last digit
    }

    return sum;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = sumOddDigits(number);

    std::cout << "The sum of odd digits in " << number << " is " << sum << "." << std::endl;

    return 0;
}
