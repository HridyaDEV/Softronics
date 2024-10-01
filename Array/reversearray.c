//program  to reverse an array




 #include <stdio.h>

int main() {
    int arr[6];
    
    printf("Enter 6 integers:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

