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

// Function to print prime numbers between M and N in decreasing order
void printPrimesInDecreasingOrder(int M, int N) {
    for (int i = N; i > M; i--) { // Loop from N down to M+1
        if (isPrime(i)) {
            printf("%d ", i); // Print prime numbers
        }
    }
    printf("\n"); // Print a newline after the primes
}

int main() {
    int M, N;

    // Input values for M and N
    printf("Enter M: ");
    scanf("%d", &M);
    printf("Enter N: ");
    scanf("%d", &N);

    // Ensure N is greater than M
    if (N <= M) {
        printf("Please ensure N > M.\n");
        return 1; // Exit if the condition is not met
    }

    // Print primes between M and N in decreasing order
    printf("Prime numbers between %d and %d in decreasing order: \n", M, N);
    printPrimesInDecreasingOrder(M, N);

    return 0;
}
