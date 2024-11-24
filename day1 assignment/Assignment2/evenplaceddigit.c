#include <iostream>
#include <cmath> // For abs

int sumEvenPlacedDigits(int number) {
    int sum = 0;
    int position = 1;

    // Handle negative numbers
    number = std::abs(number);

    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        if (position % 2 == 0) { // Check if the position is even
            sum += digit;
        }
        number /= 10; // Remove the last digit
        position++; // Move to the next position
    }

    return sum;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = sumEvenPlacedDigits(number);

    std::cout << "The sum of even-placed digits in " << number << " is " << sum << "." << std::endl;

    return 0;
}
