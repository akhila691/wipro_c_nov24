#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int findSumOFDigits(int n, int m)
{
    long long int sumOfTerms = 0;
    for (int i = 1; i <= m; i++)
    {
        sumOfTerms += pow(n, i - 1) * pow(-1, i - 1);
    }
    return sumOfTerms;
}

int main(int argCount, char *args[])
{
    int termValue = atoi(args[1]);
    int numberOfTerms = atoi(args[2]);
    printf("N value = %d, Number of terms = %d \n", termValue, numberOfTerms);

    long long int sumOfTerms = findSumOFDigits(termValue, numberOfTerms);

    printf("Sum of %d terms is %ld", numberOfTerms, sumOfTerms);
}