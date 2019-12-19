#include <stdio.h>
void main(){

	int n,med,tmp;
	n = 9;
	int num_array[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&num_array[i]);
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n-1;i++){
			if(num_array[i] > num_array[i+1]){
				tmp = num_array[i+1];
				num_array[i+1] = num_array[i];
				num_array[i] = tmp; 
			}
		}
	}
	if(n%2 == 1){
		printf("Mediana: %d\n",num_array[n/2]);
	} else {
		printf("Mediana %d, %d\n",num_array[n/2-1],num_array[n/2]);
	}



}

