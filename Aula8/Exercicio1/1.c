#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int x;
	char nome[50];

	//Entrada em String para capturar o nome por inteiro
	printf("Digite seu nome: ");
	scanf("%[^\n]", &nome);

	x = 1;

	while(x <= 99){
		printf("%s\n", nome);
		x++;
	}
	printf("%d\n", x);

	return 0;
}
