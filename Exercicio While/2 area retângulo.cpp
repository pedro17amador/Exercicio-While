#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area,dez,i;
	
	puts("\tCalculo da �rea de 10 ret�ngulo.");
	
	dez = 10;
	
	i=1;
	while(i<=dez){
		printf("\nAtribua um valor para a base do ret�ngulo: ");
		scanf("%d",&base);
		printf("Atribua o valor para altura do ret�ngulo: ");
		scanf("%d",&altura);
		
		area = base*altura;
		
		printf("A �rea do ret�ngulo � igual a: %d\n",area);
		system("cls");
		
		i++;
	}
	
	system("PAUSE");
	return 0;
	
}  
