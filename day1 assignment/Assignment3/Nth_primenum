#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return false; // Not prime if divisible by i
        }
    }
    return true; // Prime if no divisors found
}

// Function to find the Nth prime number
int findNthPrime(int N) {
    int count = 0; // Count of prime numbers found
    int num = 2;   // Number to check for primality
    while (count < N) {
        if (isPrime(num)) {
            count++; // Increment prime count
        }
        num++; // Check the next number
    }
    return num - 1; // The Nth prime will be num - 1 after the loop
}

int main() {
    int N;

    // Input: Which prime number the user wants
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Find the Nth prime number
    int nthPrime = findNthPrime(N);

    // Output the result
    printf("The %dth prime number is %d.\n", N, nthPrime);

    return 0;
}
