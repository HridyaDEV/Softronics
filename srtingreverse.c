#include <stdio.h>
#include <string.h>
 int main(){
	char str[100];
 	printf("Enter a string : ");

	fgets(str, sizeof(str), stdin); 

int first = 0;
    int last = strlen(str) - 1;
    char temp;

while(first<last)
  {
     temp = str[first];
        str[first] = str[last];
        str[last] = temp;
	
	last--;
	first++;

	

}
    printf("Reversed string: %s\n", str);
    return 0;
}
