// program to find a leap year
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%i", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("The year %i is a leap year\n", year);
            } else {
                printf("The year %i is not a leap year\n", year);
            }
        } else {
            printf("The year %i is a leap year\n", year);
        }
    } else {
        printf("The year %i is not a leap year\n", year);
    }

    return 0;
}

