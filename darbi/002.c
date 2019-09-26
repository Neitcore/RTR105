#include <stdio.h>
#include <limits.h>

int main(){
	long long a = 50000;
	long long b = 1000000;
	long long c = a * b; // sagaidamais rezultats ir 50000000000
	
	printf("int datu tipa izmers ir:%ld baiti \n",sizeof(int));
	printf("Apreekinam a un b reizinaajuma :\n");
	printf("a = %lld, b = %lld \n",a,b);
	printf("c = a * b = %lld * %lld = %lld \n",a,b,c);
}

/*
Rezultats ir -1539607552, jo a * b izmers ir lielaks neka 4 baiti. 

Lai parada rezultatu jasamaina visus int uz long long un %d uz %lld, ta tad bus pietikami 
daudz vietas mainigajiem. 
*/
