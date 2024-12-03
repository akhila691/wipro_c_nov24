#include <stdio.h>
#include "search.h"

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = linear_search(arr, n, target);

    if (result != -1) {
        printf("Target element %d found at index %d\n", target, result);
    } else {
        printf("Target element %d not found in the array\n", target);
    }

    return 0;
}

