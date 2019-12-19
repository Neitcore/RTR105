#include <stdio.h>
void main(){
	char string[255];
	scanf("%[^\n]%*c", string);
	printf("%s\n", string);



}
