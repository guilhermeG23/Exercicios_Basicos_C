#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[40];
	
	printf("Digite o nome: ");
	scanf("%s[^\n", nome);
	
	printf("%s você foi sorteado. Confira o seu prêmio", nome);
	return 0;
}
