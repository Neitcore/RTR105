#include<stdio.h>
int number1,number2;
void main(){
	printf("Ievadi skaitli #1: ");
	scanf("%d",&number1);
	printf("Ievadi skaitli #2: ");
	scanf("%d",&number2);
	if(number1 > number2){
		printf("1.skaitlis %d ir > neka 2.skaitlis %d\n",number1,number2);
	}
	else if(number2 > number1){
		printf("2.skaitlis %d ir > neka 1.skaitlis %d\n",number2,number1);
	}
	else{
		printf("Skailti ir vienadi. %d = %d\n",number1,number2);
	}


}
