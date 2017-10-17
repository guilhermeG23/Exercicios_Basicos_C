#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int val1, val2, val3, val4, result, result1, result2, result3;

printf("Comprimento do local: ");
scanf("%d", &val1);
printf("Largura do local: ");
scanf("%d", &val2);
printf("Comprimento do piso: ");
scanf("%d", &val3);
printf("Largura do Piso: ");
scanf("%d", &val4);

result = (val1 * val2);
result1 = (val3 * val4);

result2 = result / (result1 * 0.01);

switch(result2) {
case 100 ... 100000000:
		result2 = result2 + 10;
		printf("Seu numero de pisos passou de 100, adicione mais 10\n");
        printf("Numero de pisos a utilizar: %d \n", result2);
        break;
case 0 ... 99:
		result2 = result2 + 20;
		printf("Seu numero de pisos È inferior a 100, adicione mais 20\n");
        printf("Numero de pisos a utilizar: %d \n", result2);
        break;
default:
	printf("Erro ao calcular sua m√©dia.\n");
	break;
}
return(0);
}
