// program to print value of n according to value of m

#include <stdio.h>

int main() {
    int m;
    printf("Enter an integer m: ");
    scanf("%d", &m);
    
    if (m > 0) {
        printf("n is 1.\n");
    } else if (m == 0) {
        printf("n is 0.\n");
    } else {
        printf("n is -1.\n");
    }
    
    return 0;
}
