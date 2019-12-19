#include <stdio.h>
void main(){

	int n,sum;
	int num_array[10];
	for(int i = 0;i<10;i++){
		scanf("%d",&num_array[i]);
	}
	for(int i = 0;i<10;i++){
		sum = sum + num_array[i];
	}
	printf("Videja vertiba: %f\n",sum/10.);



}
