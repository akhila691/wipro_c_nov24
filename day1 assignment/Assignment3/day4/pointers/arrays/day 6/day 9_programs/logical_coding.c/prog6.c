#include <stdio.h>
int karpekar_constant(int n) {
    int count = 0;
    while (n != 6174) {
        int asc = 0, desc = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit > asc) {
                asc = digit;
            }
            temp /= 10;
        }
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit < desc || desc == 0) {
                desc = digit;
            }
            temp /= 10;
        }

        n = desc * 1000 + asc * 100 + asc * 10 + asc;

        count++;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    int count = karpekar_constant(n);
    printf("Number of iterations: %d\n", count);

    return 0;
}

