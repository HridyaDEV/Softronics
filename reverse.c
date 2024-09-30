
// program to reverse a string using array

#include <stdio.h>
#define MAX 100

int main() {
    char str[MAX], stack[MAX];
    int top = -1, i;

    printf("Enter a string: ");
    gets(str);

    
    for (i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }

    
    for (i = 0; top != -1; i++) {
        str[i] = stack[top--];
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

