#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tab,res,num;
	
	puts("\tAlgoritmo que faz a tabuada de qualquer número que voçê digitar.\n");
	
	puts("Digite a tabuada desejada:");
	scanf("%d",&tab);
	
	num = 1;
	while(num <= 10){
		
		res = tab * num;
		printf("%d  X %d = %d\n",tab,num,res);
		num++;	
	}
	
	system("PAUSE");
	return 0;
}
