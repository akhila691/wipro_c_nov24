#include <stdio.h>
#include <stdlib.h> // For abs()

void findBiggestAndSmallestDigits(int number, int *biggest, int *smallest) {
    *biggest = -1;  // Initialize to a value smaller than any digit
    *smallest = 10; // Initialize to a value larger than any digit

    // Handle negative numbers
    number = abs(number);

    while (number > 0) {
        int digit = number % 10; // Extract the last digit

        // Update the biggest and smallest digits
        if (digit > *biggest) {
            *biggest = digit;
        }
        if (digit < *smallest) {
            *smallest = digit;
        }

        number /= 10; // Remove the last digit
    }
}

int main() {
    int number;
    int biggest, smallest;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the biggest and smallest digits
    findBiggestAndSmallestDigits(number, &biggest, &smallest);

    printf("The biggest digit is: %d\n", biggest);
    printf("The smallest digit is: %d\n", smallest);

    return 0;
}
