#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int val1, val2, val3, result;

printf("Digite 1Â°nota: ");
scanf("%d", &val1);
printf("Digite 2Â°nota: ");
scanf("%d", &val2);
printf("Digite 3Â°nota: ");
scanf("%d", &val3);

result = (val1 + val2 + val3) / 3;

switch(result) {
case 7 ... 10:
        printf("Você foi aprovado com média %d \n", result);
        break;
case 4 ... 6:
        printf("Você esta de exame sua nota foi %d \n", result);;
        break;
case 0 ... 3:
        printf("Você foi reprovado com média %d \n", result);
        break;
default:
	printf("Erro ao calcular sua média.\n");
	break;
}
return(0);
}
