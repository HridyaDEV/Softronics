#include <stdio.h>

int main() {
    int n,search,i,flag=0;
int found=0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    
    printf("The array values are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
 
    }
	printf("Enter the element to search: ");
	scanf("%d",&search);
  for (int i=0;i< n; i++){

  if(arr[i]==search)
{
printf("Element found at %d",i+1);
flag=1;
found=1;
break;
}
}
if (!found){
printf("Not Found");
}

    return 0;
}

