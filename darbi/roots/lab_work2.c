#include <stdio.h>
#include <math.h>

float function(float x);
int  main(){
	float a;
	float b;
	float c;
	float y;
	float prec;
	float a_file;
	int i=0;
	printf("Enter a value of A:\n ");
	scanf("%f",&a);
	printf("Enter a value of B:\n ");
	scanf("%f",&b);
	printf("Enter a value of C:\n ");
	scanf("%f",&c);
	printf("Enter precision:\n ");
	scanf("%f",&prec);

	a_file = a;
	FILE *fp;
	fp = fopen("func_dati.dat","w");
	while(a_file<b){
		fprintf(fp, "%f %f\n",a_file,function(a_file));
		a_file = a_file + prec;
	}
	fclose(fp);


	while(a < b){
		if(trunc(function(a)) == c){
			printf("f(x) = %f if x = %f\n",c,a);
			printf("Number of iterations to find x: %d\n",i);
			return 0;

		}
		//printf("Function: %f, a: %f, i: %d, c: %f\n",function(a),a,i,c);
		a = a+prec;
		i++;


	}
	printf("No answer");
}

float function(float x){
	float y =  x*x + 2*x + 1;
	return y;
}
