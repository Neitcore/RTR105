#include <stdio.h>

double pi(){
	return 3.14;
}

int main(){
	int R = 123;
	int L = 2 * pi() * R;
	printf("Rinka ar raadiusu %d garums ir %dm\n", R, L);
	return 0;
}

/*
Mani pedejie cipari ir 123



Rinka ar raadiusu 123m garums ir 772m
*/
