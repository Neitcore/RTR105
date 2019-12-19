#include <stdio.h>
#include <string.h>
void main(){
	char string[255];
	scanf("%[^\n]%*c", string);
	printf("Rindas garums: %ld\n",strlen(string));



}
