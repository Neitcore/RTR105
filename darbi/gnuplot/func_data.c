#include <stdio.h>

int i;
float main(){
	FILE *fp;

	fp = fopen("func_dati.dat","w");
	for(i=0;i<100;i++){
		fprintf(fp, "%d %d\n",i,i*i+i*2+1);
	}
	fclose(fp);
}
