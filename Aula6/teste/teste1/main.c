#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[20];
	int i;
	
	printf ("Entre com o seu nome: ");
	scanf ("%[^\n]s", &nome);
	
	for(i = 1; i <= 20; i++) {
		printf("%d | %s \n", i, nome);
	}
	
	return 0;
}
