
// to print array in descending order


#include <stdio.h>

int main() {
    int n,i;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    
    printf("The array values are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
 
    }
 for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    printf("Array in Descending Order: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
