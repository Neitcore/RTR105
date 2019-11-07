#include <stdio.h>

int main(){
	int i = 0;	
	char rindakopa[10^2];
	char rinda1[100];
	char rinda2[100];
	scanf("%[^\n]%*c", rinda1);
	for(i;i<100;i++){
		rinda2[i] = rinda1[i];

	}
	printf("Rezultats (kopeta rinda): %s\n", rinda2) ;


}
