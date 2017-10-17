#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	char nome[20];
	float nota1, nota2, nota3, media;
	
	for(i = 1; i < 6; i++) {
		
		printf("Nome do Aluno: ");
		scanf ("%s", &nome);
		
		printf("Nota1: ");
		scanf ("%f", &nota1);
		printf("Nota2: ");
		scanf ("%f", &nota2);
		printf("Nota3: ");
		scanf ("%f", &nota3);
		
		media = (nota1 + nota2 + nota3)/3;
		printf("\n");
		
		printf("%s sua Média foi: %0.2f\n\n", nome, media);
	}
	
	return 0;
}
