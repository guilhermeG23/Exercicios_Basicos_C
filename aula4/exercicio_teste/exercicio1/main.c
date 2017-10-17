#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("Nota 1: ");
	scanf("%f", &nota1);
	printf("Nota 2: ");
	scanf("%f", &nota2);
	printf("Nota 3: ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	
	if(media >= 6.0) {
		printf("Você foi aprovado com media: %0.2f", media);
	}
	return 0;
}
