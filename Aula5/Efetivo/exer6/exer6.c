#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int val1, val2, val3, result;

printf("Digite 1°nota: ");
scanf("%d", &val1);
printf("Digite 2°nota: ");
scanf("%d", &val2);
printf("Digite 3°nota: ");
scanf("%d", &val3);

result = (val1 + val2 + val3) / 3;

switch(result) {
case 7 ... 10:
        printf("Voc� foi aprovado com m�dia %d \n", result);
        break;
case 4 ... 6:
        printf("Voc� esta de exame sua nota foi %d \n", result);;
        break;
case 0 ... 3:
        printf("Voc� foi reprovado com m�dia %d \n", result);
        break;
default:
	printf("Erro ao calcular sua m�dia.\n");
	break;
}
return(0);
}
