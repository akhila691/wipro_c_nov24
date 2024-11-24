#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the Nth term of the series
int findNthTerm(int N) {
    int count = 0;  // To count the number of primes found
    int current = 2; // Start checking from 2
    
    for (int i = 1; i <= N; i++) {
        // Check if the current number is prime
        if (isPrime(current)) {
            // If it's a prime, it will appear twice for even positions
            count++;
            if (i == N) {
                return current;
            }
            if (i+1 == N) {
                return current; // Return again for even positions
            }
        }
        current++;
    }
    return -1; // In case something goes wrong
}

int main() {
    int N;

    // Input: Which term (N) of the series you want
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Find the Nth term of the series
    int nthTerm = findNthTerm(N);

    // Output the result
    printf("The %dth term of the series is: %d\n", N, nthTerm);

    return 0;
}
