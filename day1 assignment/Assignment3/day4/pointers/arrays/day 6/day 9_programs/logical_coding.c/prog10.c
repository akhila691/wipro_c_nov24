#include <stdio.h>

void convert_odd_even(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            
            arr[i] -= 1;
        } else {
            
            arr[i] += 1;
        }
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);

    convert_odd_even(arr, n);

    printf("Array after conversion: ");
    print_array(arr, n);

    return 0;
}

