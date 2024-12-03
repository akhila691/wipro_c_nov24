#include <stdio.h>

void remove_duplicates(int arr[], int *n) {
    int i, j, k;
    for (i = 0; i < *n - 1; i++) {
        for (j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                
                (*n)--;
                j--;
            }
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
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);
     remove_duplicates(arr, &n);

    printf("Array after removing duplicates: ");
    print_array(arr, n);

    
    for (int i = n; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("0 ");
    }
    printf("\n");

    return 0;
}

