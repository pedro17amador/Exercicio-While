#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float alt, pesoIdeal;
	int sexo,i,pessoas;
	
	
	puts("Algoritmo que v� o peso ideal de 15 pessoas\n");
	
	pessoas = 15;     //Finalizar: Tirar duvida se da pra frz com if e else ou so com swicth
	
	i=1;
	
	while(i<=pessoas){
		printf("\n%d� Pessoa\n",i);
		puts("Digite seu sexo:\n[1]=Feminino\n[2]=Masculino");
		scanf("%d",&sexo);
		puts("Digite sua altura: ");
		scanf("%f",&alt);
			
		if(sexo == 1){
			pesoIdeal = (62.1 * alt) - 44.7;
			printf("O peso que ideal para voc� �: %.2f\n", pesoIdeal);
		} 
		else{
			if(sexo == 2){
				pesoIdeal = (72.7 * alt) - 58;
				printf("O peso que ideal para voc� �: %.2f\n", pesoIdeal);;	
			}
			else{
				puts("\nN�mero inv�lido!!\n");
			}
		}
		i++;
	}
	system("PAUSE");
	return 0;
}
