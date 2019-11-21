//S0,S1,S2,S3 = S
#include <stdio.h>
#include <math.h> 

void main(){
	double x=2.05,y,a,S;
	int k = 0;
	y=sin(x);
	printf("sin(%.2f) =  %.2f y\n",x,y);

	a = (pow(-1,k)*pow(x,2*k+1)/(1.));
	S = a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	k++;
	a = a * (-1) *x*x /((2*k)*(2*k+1));
	S = S + a;
	printf("%.2f\t%.2f\t%.2f\n",x,a,S);
	k++;
	a = a * (-1) *x*x /((2*k)*(2*k+1));
	S = S + a;
	printf("%.2f\t%.2f\t%.2f\n",x,a,S);
	k++;
	a = a * (-1) *x*x /((2*k)*(2*k+1));
	S = S + a;
	printf("%.2f\t%.2f\t%.2f\n",x,a,S);

}
