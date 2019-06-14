#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area,dez,i;
	
	puts("\tCalculo da área de 10 retângulo.");
	
	dez = 10;
	
	i=1;
	while(i<=dez){
		printf("\nAtribua um valor para a base do retângulo: ");
		scanf("%d",&base);
		printf("Atribua o valor para altura do retângulo: ");
		scanf("%d",&altura);
		
		area = base*altura;
		
		printf("A área do retângulo é igual a: %d\n",area);
		system("cls");
		
		i++;
	}
	
	system("PAUSE");
	return 0;
	
}  
