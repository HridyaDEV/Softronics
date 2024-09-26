#include <stdio.h>
int main(){
	int num;
	printf("Enter a number to check:\n");
	scanf("%i",&num);
if(num%2==0){
	printf("%i is even number",num);
	}
else {
	printf("%i is odd number",num);
	}
return 0;
}
