#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha,i,x;
	
	puts("Digite uma senha:");
	scanf("%d",&senha);
	
	i=1;
	
	while(i<3){	
		if(senha == 12345){
			i = 2;
			puts("Acesso permitido.\n");
		}
		else{
			puts("Senha incorreta. Digite novamente.\n");
			scanf("%d",&senha);	
			x++;	
		}
		i++;
	}
	if(x == 3){
		puts("Conta bloqueada!");
	}
		
	system("PAUSE");
	return 0;
}
