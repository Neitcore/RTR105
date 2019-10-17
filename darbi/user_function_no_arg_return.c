#include <stdio.h>
void user_function_1(){
	printf("Sveicinu no savas func\n");

}
int user_function_5();

void main(){
	int i_main,N=5;
	i_main = user_function_5();

	while(i_main!=N){
		printf("Ievada: %d\n",i_main);
		i_main = user_function_5();
		}


}

user_function_5(){
	int i_uf;
	printf("Ievad skaitli:\n");
	scanf("%d",&i_uf);
	return i_uf;
}

