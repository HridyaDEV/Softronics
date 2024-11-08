
//Sorting array using QUICK SORT

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

int partition(int arr[], int lowerbound, int upperbound) {
    int pivot = arr[lowerbound];
    int start = lowerbound;
    int end = upperbound;

    while (start < end) {
        while (arr[start] <= pivot && start < upperbound) {
            start++;
        }

        while (arr[end] > pivot) {
            end--;
        }

        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int temp = arr[lowerbound];
    arr[lowerbound] = arr[end];
    arr[end] = temp;

    return end;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
