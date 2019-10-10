#include<stdio.h>
int num;
void main(){
	printf("Ievadi skaitli #1: ");
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("Para skaitlis\n");
	}

	else{
		printf("nepara skaitlis\n");
	}


}
