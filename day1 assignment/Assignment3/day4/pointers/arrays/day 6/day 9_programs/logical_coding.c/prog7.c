#include <stdio.h>

int count_element(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int count = count_element(arr, n, target);

    printf("Element %d is present %d times in the array.\n", target, count);

    return 0;
}
