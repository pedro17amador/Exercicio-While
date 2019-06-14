#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	int n1,n2,n3,n4,total,i,aluno;
	
	puts("\tEsse algoritmo é para ver 7 médias de 7 aluno.");
	
	aluno = 7;
	
	i = 1;
	
	while(i<=aluno){
		printf("\n%dº Aluno.",i);
		puts("\nDigite a primeira nota do um alumo:");
		scanf("%d",&n1);
		puts("Digite a segunda nota de um alumo:");
		scanf("%d",&n2);
		puts("Digite a terceira nota de um alumo:");
		scanf("%d",&n3);
		puts("Digite a quarta nota de um alumo:");
		scanf("%d",&n4);
		
		total = (n1+n2+n3+n4)/4;
		
		printf("A média desse aluno é: %d\n",total);
		
		i++;
	}
	system("PAUSE");
	return 0;
}
