#include <stdio.h>
#include <math.h> // For sqrt() function

int isPerfectSquare(int number) {
    if (number < 0) {
        return 0; // Negative numbers cannot be perfect squares
    }

    int squareRoot = (int)sqrt(number); // Find the integer square root

    // Check if the square of the squareRoot equals the original number
    return (squareRoot * squareRoot == number);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfectSquare(number)) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}
