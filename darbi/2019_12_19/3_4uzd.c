#include <stdio.h>
void main(){
	int k = 0;
	int tmp;
	char string[1000];
	int num_array[1000];
	scanf("%[^\n]%*c",string);
	while(string[k] != '\0'){
		int n = string[k];
		num_array[k]=n;
		k++;
	}
	for(int i = 0;i<k;i++){
		for(int j = 0;j<k-1;j++){
			if(num_array[j]>num_array[j+1]){
			tmp = num_array[j+1];
			num_array[j+1] = num_array[j];
			num_array[j] = tmp;
			}
		}
	}
	char min = num_array[0];
	char max = num_array[k-1];
/*	for(int i = 0; i<k;i++){
		char c = num_array[i];
		printf("%c ",c);
	}
	printf("\n");
*/
	printf("Mazaka vertiba: %c- %d\nLielaka vertiba: %c- %d\n",num_array[0],min,num_array[k-1],max);

}
