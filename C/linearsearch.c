// program to find an element in array using LINEAR SEARCH


#include <stdio.h>

int main() {


    int arr[] = {34, 8, 23, 56, 12};

    int size = 5;


    int target = 23;


    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = 1;
            printf("Number %d found in the at %d in array.\n", target,i);
            break;
        }
    }


    if (!found) {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}

