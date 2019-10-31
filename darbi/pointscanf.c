#include <stdio.h>
int main() {
	printf("please enter interger number:");
	int x;
	int* y = &x;
	scanf("%d", y);
	printf("Digit %d is located at the address %p\n",x,y);
}
