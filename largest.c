// program to find the largest number among three numbers


#include <stdio.h>
int main(){
	int a,b,c;
	int largest;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&a ,&b, &c);
if(a>=b){
	largest=a;
	}
else{
	largest=c;
	}
if(b>=c){
	largest=b;
	}
else{
	largest=c;
	}
	printf("%d is largest",largest);
return 0;
}
