#include <stdio.h>
#include <stdlib.h> // For abs()

int isPalindrome(int number) {
    int originalNumber = number; // Save the original number
    int reversedNumber = 0;

    // Handle negative numbers (palindromes cannot be negative)
    if (number < 0) {
        return 0; // Not a palindrome
    }

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;       // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        number /= 10;                   // Remove the last digit
    }

    // Check if the original number equals the reversed number
    return originalNumber == reversedNumber;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
