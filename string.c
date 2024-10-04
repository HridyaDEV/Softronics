//Problem: First Unique Character in a String

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char s[MAX_LENGTH];
    int char_count[256] = {0};

    printf("Enter a string: ");
    fgets(s, MAX_LENGTH, stdin);

    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        char_count[s[i]]++;
    }

    int index = -1;
    for (int i = 0; i < length; i++) {
        if (char_count[s[i]] == 1) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("The first non-repeating character is at index: %d\n", index);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
