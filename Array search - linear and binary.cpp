#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    int linearIndex = linearSearch(arr, size, target);
    if (linearIndex != -1) {
        printf("Linear Search: Element %d found at index %d\n", target, linearIndex);
    } else {
        printf("Linear Search: Element %d not found\n", target);
    }
    int binaryIndex = binarySearch(arr, size, target);
    if (binaryIndex != -1) {
        printf("Binary Search: Element %d found at index %d\n", target, binaryIndex);
    } else {
        printf("Binary Search: Element %d not found\n", target);
    }
    return 0;
}
