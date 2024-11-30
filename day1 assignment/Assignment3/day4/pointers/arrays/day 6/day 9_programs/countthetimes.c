#include <stdio.h>

int countElement(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target element: ");
    scanf("%d", &target);

    int count = countElement(arr, n, target);

    if (count > 0) {
        printf("Element %d is present %d times in the array.\n", target, count);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}

