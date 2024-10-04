// Problem: Find Missing Numbers

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100000

int main() {
    int nums[MAX_SIZE];  
    bool present[MAX_SIZE + 1] = {false};  
    int size;

    
    printf("Enter the number of elements in the array : ");
    scanf("%d", &size);

    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);  
        if (nums[i] <= size) {
            present[nums[i]] = true;  
        }
    }

    
    printf("Missing numbers: ");
    for (int i = 1; i <= size; i++) {
        if (!present[i]) {  
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
