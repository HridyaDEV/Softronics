// program to categorize according to height

 #include <stdio.h>

int main() {
    float height;
    printf("Enter height in centimeters: ");
    scanf("%f", &height);
    
    if (height < 150) {

        printf("Short\n");
    } else if (height >= 150 && height < 180) {

        printf("Average\n");
    } else {
        printf("Tall\n");
    }
    
    return 0;
}
