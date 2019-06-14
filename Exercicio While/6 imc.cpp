#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso,altura,imc;
	int quant_imc,i;
	
	printf("\tAlgoritmo mostra o IMC e vê no padrão que você se encaixa");
	printf("\nDigite a quantidade de IMCs qua você deseja calcular: ");
	scanf("%d",&quant_imc);
	
	i=1;
	
	while(i<=quant_imc){
		
		printf("\n%dº IMC\n",i);
		puts("Digite sua altura:");
		scanf("%f",&altura);
		puts("Digite sua peso:");
		scanf("%f",&peso);	
		
		imc = peso/(altura*altura);
		
		if(imc < 18){
			puts("Seu indice corporal é magreza");
			printf("%.2f\n",imc);
		}
		else{
			if(imc >= 18 && imc < 25){
				puts("Seu indice corporal é saudável");
				printf("%.2f\n",imc);
			}
			else{
				if(imc > 24,9 && imc < 30){
					puts("Seu indice corporal é sobrepeso");
					printf("%.2f\n",imc);
				}
				else{
					if(imc > 29,9){
						puts("Seu indice corporal obesidade70");
						printf("%.2f\n",imc);
					}
					else{
						puts("ERROR\n");
					}	
				}
			}
		}
		i++;
	}

	system("PAUSE");
	return 0;	
}
