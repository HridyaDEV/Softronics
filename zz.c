#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    int len;

    printf("Enter a number: ");
    scanf("%s", num);

    len = strlen(num);
    while (len > 1 && num[len - 1] == '0') {
        len--;
    }
    num[len] = '\0';

    printf("Result: %s\n", num);
    return 0;
}
