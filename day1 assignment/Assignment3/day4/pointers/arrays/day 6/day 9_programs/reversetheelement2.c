#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;
    int j = 4;  // last index of the array
    int temp;

    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array using a while loop
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   return 0;
}
