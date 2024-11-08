
//c programm to move zeroes to end  in an array


#include <stdio.h>

int main() {
    int n;
    int arr[50];

    
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int nonZeroIndex = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    
    for (int i = nonZeroIndex; i < n; i++) {
        arr[i] = 0;
    }

    
    printf("Array after moving zeroes to the end: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
