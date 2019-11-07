
#include <stdio.h>
#include <string.h>
int main(){
	int j;
	int i = 0;
	int vardi = 0;
	char rinda[100];
	char tmp_rinda[100];
	int tmpBurtuSkaits = 0;
	scanf("%[^\n]%*c", rinda);
	while(rinda[i] != '0'){
		//printf("%c\n",rinda[i]);
		if(rinda[i] == ' '){
			vardi++;
		}
	i++;
	}
	printf("Vardu skaits: %d\n",vardi+1);
	//Vardi > 5
	i = 0; 
	while(rinda[i] != '0'){
		if (rinda[i] != ' '){
			tmp_rinda[i] = rinda[i];
		}
		else{
			if(strlen(tmp_rinda) > 5){
				printf("%s\n",tmp_rinda);
			}
		}
	i++;

	}
}
