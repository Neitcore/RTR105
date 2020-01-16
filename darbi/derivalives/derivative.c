#include <stdio.h>
#include <math.h>

void main(){
//sin(x)' = cos(x)
FILE*f;
f = fopen("derivative.dat","w");
float a,b,x,delta_x;

printf("\nEnter a: ");
scanf("%f",&a);
printf("\nEnter b: ");
scanf("%f",&b);
printf("\nValue precision (dx): ");
scanf("%f",&delta_x);
fprintf(f,"\tx\t\tsin(x)\t\tsin\'(x)\n");
x = a;
while(x<b){
	fprintf(f,"%10f.2f\t%10.2f\t%10.2f\n",x,sin(x),(sin(x+delta_x)-sin(x))/delta_x);
	x+= delta_x;
}
fclose(f);
}
