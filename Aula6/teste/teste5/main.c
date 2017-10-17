#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, qtd;
	char nome[20];
	float nota1, nota2, nota3, media;
	
	printf("Quantos Alunos você possui: ");
	scanf ("%d", &qtd);
	
	printf("\nCalcule a média de seus alunos:\n ");
	for(i = 1; i <= qtd; i++) {
		
		printf("\nNome do Aluno: ");
		scanf ("%s", &nome);
		
		printf("Nota1: ");
		scanf ("%f", &nota1);
		printf("Nota2: ");
		scanf ("%f", &nota2);
		printf("Nota3: ");
		scanf ("%f", &nota3);
		
		media = (nota1 + nota2 + nota3)/3;
		printf("\n");
		
		printf("A média de %s foi: %0.2f\n", nome, media);
		printf("--------------------------------------------\n ");
	}
	
	return 0;
}
