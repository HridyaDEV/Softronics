



#include <stdio.h>

int main() {
    
    int arr[8] = {12, 45, 7, 89, 23, 56, 3, 78};

    
    int max = arr[0];
    int min = arr[0];

    
    for (int i = 1; i < 8; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}
