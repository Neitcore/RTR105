#include <stdio.h>
int yes_no = 1,num1,num2,no=0;
void main(){
	for(yes_no=1; yes_no;){
		printf("Ievadiet #1: ");
		scanf("%d",&num1);
		printf("Ievadiet #2 ");
		scanf("%d",&num2);
	
		if(num1 > num2){
			printf("#1 skaitlis %d > #2 skaitli %d",num1,num2);
		}
		else if(num1 < num2){
			printf("#2 skailtlis %d > #1 skaitli %d",num2,num1);
		}
		else{
			printf("#1 skailtis %d = #2 skailtli %d", num2,num1);
		}
		printf("Turpinat? 1/0: \n");
		scanf("%d",yes_no);

	}



}
