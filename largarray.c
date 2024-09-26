#include <stdio.h>

int main(){

int n;
int arr[50];
	printf("Enter the size of array: \n");
	scanf("%d",&n);
 printf("Enter the array elements: \n");
 for (int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
 int largest= arr[0];
for ( int i=1;i<n;i++){
	if (arr[i]>largest){
		
		largest=arr[i];
	}
 }


	printf("The largest element is %d\n",largest);
return 0;
}
