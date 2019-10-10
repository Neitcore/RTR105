#include<stdio.h>
#include <time.h>
int num;
clock_t start_t, end_t, total_t;
void main(){
	printf("Ievadi skaitli #1: ");
	scanf("%d",&num);
	start_t=clock();
	if(num % 2 == 0){
		printf("Para skaitlis\n");
	}

	else{
		printf("Nepara skaitlis\n");
	}
	end_t = clock();
	printf("Aprekins aiznema no %ld lidz %ld -> %ld\n",start_t,end_t,end_t-start_t);
	start_t=clock();
	if((num<<31)>>31){
		printf("nepara skaitlis\n");
	}
	else{
		printf("para\n");
	}
	end_t=clock();
	printf("Aprekins aiznema no %ld lidz %ld -> %ld\n",start_t,end_t,end_t-start_t);


}
