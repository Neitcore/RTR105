#include <stdio.h>

int num1,num2,i=0;
int yes_no=1;
void main(){
	while(i<=5 && yes_no){
		i++;
		printf("Ievadiet #1: \n");
		scanf("%d",&num1);
		printf("Ievadiet #2 \n");
		scanf("%d",&num2);
	
		if(num1 > num2){
			printf("#1 skaitlis %d > #2 skaitli %d\n",num1,num2);
		}
		else if(num1 < num2){
			printf("#2 skailtlis %d > #1 skaitli %d\n",num2,num1);
		}
		else{
			printf("#1 skailtis %d = #2 skailtli %d\n", num2,num1);
		}
		printf("Turpinat? 1/0: \n");
		scanf("%d",&yes_no);

	}



}
