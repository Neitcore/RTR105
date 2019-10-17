#include <stdio.h>
void user_function_1(){
	printf("Sveicinu no savas func\n");

}
void user_function_2();

void main(){
	user_function_1();
	user_function_1();
	user_function_2();
	

}

user_function_2(){
	user_function_1();
}
