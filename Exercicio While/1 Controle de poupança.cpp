#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	float deposInicial,Remuneracao,mes1,mes2,mes3;
	int quant_mes,i;
	
	puts("\tControle de poupan�a.\n");
	
	
	puts("Digite um m�s para ver a quantidade do saldo ap�s a quantidade definida:");
	scanf("%d",&quant_mes);
	
	deposInicial = 500;
		
	puts("Seu deposito atual � de: R$500,00");
	
	i=1;
	
	while(i<=quant_mes){
		
		deposInicial = deposInicial + ((deposInicial / 100) * 1);
		
		printf("O seu saldo ap�s %d m�s � de: R$%f\n",i,deposInicial);
		i++;	
	}
	
	system("PAUSE");
	return 0;
	
}
