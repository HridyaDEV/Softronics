// Linear search : user input


#include <stdio.h>

int main(){

 int size,search;
 
int found=0;
printf("Enter the size of array : ");
scanf("%d",&size);

	int arr[size];
printf("Enter the array elements :\n");

	for (int i=0;i<size;i++){

scanf("%d",&arr[i]);
}
printf("Enter element to search: \n");
scanf("%d",&search);

for(int i=0;i<size;i++){
	if(arr[i]==search){
		found=1;
		
		printf("Element %d found at position %d \n",search,i+1);
		break;

	}
	
	}
	if(!found){
		printf("Element not found\n");
}

return 0;
}
