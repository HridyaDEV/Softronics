// progran to find if two numbers are eqaul

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);  

    if (a == b) {

        printf("a equal b: %d, %d\n", a, b);
    }
    else {
        printf("a not equal b: %d, %d\n", a, b);
    }

    return 0;
}



