#include <stdio.h>
#include <stdlib.h> // For abs()

int sumOddPlacedEvenDigits(int number) {
    int sum = 0;
    int position = 1; // Start position from 1 for the rightmost digit

    // Handle negative numbers by taking the absolute value
    number = abs(number);

    // Process each digit of the number
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit

        // Check if the position is odd and the digit is even
        if (position % 2 != 0 && digit % 2 == 0) {
            sum += digit; // Add to sum if both conditions are met
        }

        number /= 10;  // Remove the last digit
        position++;     // Move to the next position
    }

    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumOddPlacedEvenDigits(number);

    printf("The sum of odd-placed even digits in %d is %d.\n", number, sum);

    return 0;
}
