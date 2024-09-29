// program to find quadrant 
#include <stdio.h>

int main() {
    float x, y;
    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);
    
    if (x > 0 && y > 0) {

        printf("The point is in Quadrant I.\n");
    }
	 else if (x < 0 && y > 0) {

        printf("The point is in Quadrant II.\n");
    }
	 else if (x < 0 && y < 0) {
        printf("The point is in Quadrant III.\n");
    }  
	else if (x > 0 && y < 0) {
        printf("The point is in Quadrant IV.\n");
    } 
	
else {
        printf("The point lies on an axis.\n");
    }
    
    return 0;
}
