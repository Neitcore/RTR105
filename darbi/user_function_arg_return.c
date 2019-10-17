#include <stdio.h>
int user_function_6(int i_uf){
	i_uf++;
	printf("Sveicinu no savas func, tas ir i %d\n",i_uf);
	return i_uf;
}


void main(){
	int i_main=0,N=5;

	i_main=user_function_6(i_main);


	while(i_main<N){
		i_main=user_function_6(i_main);
	}
	

}
void user_function_4(double i_uf,double d_uf){
	printf("Skaitam %f reize,tatad %.2f dala\n",i_uf,d_uf);


}
