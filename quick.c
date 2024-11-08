#include <stdio.h>

void quickSort(int arr[], int lowerbound, int upperbound);
int partition(int arr[], int lowerbound, int upperbound);
void printArray(int arr[], int n);

int main() {
    int n;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    quickSort(arr, 0, n - 1);

   
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}


void quickSort(int arr[], int lowerbound, int upperbound) {
    if (lowerbound < upperbound) {
        int pivot = partition(arr, lowerbound, upperbound); 
        quickSort(arr, lowerbound, pivot - 1);  
        quickSort(arr, pivot + 1, upperbound);  
    }
}

// Partition function (pivot is the first element)
int partition(int arr[], int lowerbound, int upperbound) {
    int pivot = arr[lowerbound]; // Choose the first element as pivot
    int start = lowerbound;      // Start pointer
    int end = upperbound;        // End pointer

    while (start < end) {
        
        while (arr[start] <= pivot && start < upperbound) {
            start++;
        }

        // Move the end pointer until an element smaller than pivot is found
        while (arr[end] > pivot) {
            end--;
        }

        // Swap elements if start is still less than end
        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    // Swap the pivot element with the element at the end pointer
    int temp = arr[lowerbound];
    arr[lowerbound] = arr[end];
    arr[end] = temp;

    return end; // Return the correct position of the pivot
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
