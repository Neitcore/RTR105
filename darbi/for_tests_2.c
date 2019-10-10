#include <stdio.h>

int num1,num2,i;
int yes_no;
void main(){
	for(yes_no=1,i=0;i<=5 && yes_no;i++){
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
		if(i<5){
			printf("Meginajums #%d \nTurpinat? 1/0: \n",i+1);
			scanf("%d",&yes_no);
		}
		else{
			printf("Nav vel meginajumus\n");
			yes_no=0;
		}

	}



}
