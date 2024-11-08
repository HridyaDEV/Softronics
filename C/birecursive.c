// Binary search using recursive function

#include<stdio.h>

int binarySearch(int arr[], int low, int high, int search) {
    if (low > high) {
        return -1;
    }
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == search) {
        return mid;
    } else if (arr[mid] < search) {
        return binarySearch(arr, mid + 1, high, search);
    } else {
        return binarySearch(arr, low, mid - 1, search);
    }
}

int main() {
    int size, search, result;
    
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the sorted array (space-separated):\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search:\n");
    scanf("%d", &search);
    
    result = binarySearch(arr, 0, size - 1, search);
    
    if (result != -1) {
        printf("Element %d found at index %d.\n", search, result);
    } else {
        printf("Element %d not found in the array.\n", search);
    }
    
    return 0;
}
