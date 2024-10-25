
//Program to find the  sum of digits of an integer until the sum become one digit


#include <stdio.h>

int main() {
    int num, sum;
printf("Enter an integer: ");
    scanf("%d", &num);

    
    while (num >= 10) {
        sum = 0;

        
        while (num != 0) {
            sum += num % 10;  
            num /= 10;         
        }

        
        num = sum;
    }

    
    printf("Output: %d\n", num);

    return 0;
}
