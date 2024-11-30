#include <stdio.h>

void swapHalves(int arr[], int n) {
    int mid = n / 2;
    int temp;

    for (int i = 0; i < mid; i++) {
        temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    swapHalves(arr, n);

    printf("Array after swapping halves: ");
    printArray(arr, n);

    return 0;
}
