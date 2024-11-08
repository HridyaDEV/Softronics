#include <stdio.h>

int main() {
    int arr[] = {3, 6, 9, 12, 15, 18, 21};
    int size = 7;
    int target = 15;
    int low = 0, high = size - 1, mid;
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = 1;
            printf("Number %d found at index %d.\n", target, mid);
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
