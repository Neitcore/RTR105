#include <stdio.h>

char x;

int fun(){
	char delta = 3;
	x = x + delta;
	return x;
}

int main(){
	x = 12 + 32;
	printf("Pirms, %c \n", x);
	// Sheit paraadaas burts ",", jo 44 sym ir "," (ASCII tabulaa)
	fun();
	printf("Peec 1 reizes, %c \n",x);
	//Sheit paraadaas burts "/", jo 47 sym ir "/" (ASCII tabula)
	fun();
	printf("Peec 2 reizes, %c \n",x);
	//Sheit paraadaas burts "2", jo 50 sym ir "2" (ASCII tabula)
}
