#include <stdio.h>
void user_function_3(int i_uf){
	printf("Sveicinu no savas func, tas ir i %d\n",i_uf);

}


void main(){
	int i_main=0; 
	double N=2;
	while(i_main<6){
		user_function_3(i_main);
		user_function_4(i_main,i_main/N);

		i_main++;
	}
	

}
void user_function_4(double i_uf,double d_uf){
	printf("Skaitam %f reize,tatad %.2f dala\n",i_uf,d_uf);


}
