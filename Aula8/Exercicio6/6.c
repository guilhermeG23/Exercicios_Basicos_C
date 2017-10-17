#include <stdio.h>
#include <stdlib.h>

int main() {

	int sair, maior, menor, entrada;

	maior = 0;
	menor = 99999999999999;
	sair = 1;

	while(sair != 0){
		printf("Digite um valor poisitivo: ");
		scanf("%d", &entrada);

		if(maior < entrada){
			maior = entrada;
		}
		if(entrada < menor){
			menor = entrada;
		}

		entrada = 0;
		printf("Deseja sair? Escreva 0: ");
		scanf("%d", &sair);
	}

	printf("\n\nMaior Valor: %d", maior);
	printf("\nMenor valor: %d", menor);

	return 0;
}
