#include <stdio.h>
#include <stdlib.h>

int main() {

	int	f, x, y, entrada, w;
	float valor, media, result, valor1;
	f = 1;
	while(f != 0){
		printf("Entre com o valor do local:\n");
		printf("1 - Campo\n");
		printf("2 - Praia\n");
		printf("0 - Sair\n");
		printf("Digite o valor: ");
		scanf("%d", &f);

		switch(f){
			case 1:
				printf("\n\n");
				printf("Voce Escolheu a praia\n");
				y++;
				printf("\n\n");
				printf("Digite o seu salario: ");
				scanf("%f", &valor);
				valor1 = valor1 + valor;
				break;
			case 2:
				printf("\n\n");
				printf("Voce escolheu o campo\n");
				x++;
				printf("\n\n");
				printf("Digite o seu salario: ");
				scanf("%f", &valor);
				valor1 = valor1 + valor;
				break;
			case 0:
				w = x + y;
				result = valor1 / w;
				printf("\n\n");
				printf("Numero de pessoas que escolheram o campo: %d\n", x);
				printf("Media salario dos entrevistados: %0.2f\n", result);
				exit(0);
				break;
			default:
				printf("\n\n");
				printf("Deu errado\n");
				exit(0);
				break;
			}
		}
	return 0;
}
