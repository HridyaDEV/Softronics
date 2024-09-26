#include <stdio.h>

int main(){
   
   int age;
printf("Enter an age");
scanf("%d",&age);

if ( age >= 18){
	printf("You can caste vote");
}
  else { 
	printf("You are under 18: Can't caste vote");
}
return 0;

}
