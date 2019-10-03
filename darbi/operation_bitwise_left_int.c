#include <stdio.h>

int a = 10;
int b;// 0000 0000 0000 0000
int c;// atmina paradises mainigais a izmers 1 baits 0000 0000 0000 0001
void main()
{
	printf("operacija <<: %d<<1 rezultats %d\n",a,a<<1);// 10, 20
	printf("S mainiga \"sakuma\" stavoklis (uzreiz pec deklaresanas): %d\n",b);
	printf("operacija >>: %d>>1 rezultats %d\n",a,a>>1);//10, 5
	b<<2;
	printf("operacija <<: %d<<2 rezultats: %d\n",b);
	printf("Ievadi pirmo operandu:\n ");
	scanf("%d",&a);
	printf("Ivadi 2 operandu:\n");
	scanf("%d",&c);
	printf("%d pa kreisi no %d, rezultats: %d\n",c,a,a<<c);



}


