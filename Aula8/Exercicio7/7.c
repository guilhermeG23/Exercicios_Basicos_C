#include <stdio.h>
#include <stdlib.h>

int main() {

	int idade, x, maior, total;
	float result;

	idade = 1;
	x = 0;
	maior = 0;
	total = 0;
	result = 0;

	while(idade != 0){
		printf("Digite sua idade: ");
		scanf("%d", &idade);

		if(idade != 0){
			x++;
		}

		total = total + idade;

		if(maior < idade){
			maior = idade;
		}
	}

	result = total / x;

	printf("Numero de pessoas: %d\n", x);
	printf("Media do grupo: %0.2f\n", result);
	printf("Maior idade: %d\n", maior);

	return 0;
}
