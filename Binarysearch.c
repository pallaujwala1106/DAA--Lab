#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Element not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; // Element found
    } 
    else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target); // Search left half
    } 
    else {
        return binarySearch(arr, mid + 1, right, target); // Search right half
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
