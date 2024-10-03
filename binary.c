// Implementing binary search as user input


#include<stdio.h>

int main() {
    int size, low = 0, high, found = 0, mid, search;
    
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the sorted array (space-separated):\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search:\n");
    scanf("%d", &search);
    
    high = size - 1;
    
    while(low <= high) {
        mid = (low + high) / 2;
        
        if(arr[mid] == search) {
            found = 1;
            printf("Element %d found at index %d.\n", search, mid);
            break;
        } else if(arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }
    
    return 0;
}


        
    

