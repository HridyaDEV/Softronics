

// to print an array

#include <stdio.h>
int main(){
 int n, arr[n];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
 for( int i=0;i <n;i++){
	
	scanf("%d",&arr[i]);
      }
 printf("The array is :\n");
 for( int i=0;i <n;i++){
        printf("%d",arr[i]);
 }

return 0;
}
