                                                  
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
 int sum=0;

for(int i=0;i<n;i++){
 sum = sum+arr[i];
}
printf("The sum of array is: %d\n",sum);
 int ave;
ave = sum/n;
printf("Average = %d\n",ave);
return 0;
}


