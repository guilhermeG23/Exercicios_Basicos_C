#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int val1;
float x, val2, result, var;

printf("Numero de horas trabalhadas na semana: ");
scanf("%d", &val1);
printf("Valor da Hora: ");
scanf("%f", &val2);

switch(val1) {
case 0 ... 40:
		var=(float)val1;
		result = (var * val2);
		printf("Você ganha %0.2f trabalhando %d Horas por semana \n", result, val1);
        break;
case 41 ... 60:
		var=val1;
		var=(float)var;
		result = (var * val2);
		x = (result * 0.5);
		result = result + x; 
        printf("Você ganha %0.2f trabalhando %d Horas por semana \n", result, val1);
        break;
case 61 ... 1440:
		var=val1;
		var=(float)var;
		result = (var * val2);
		result = (result * 2);
        printf("Você ganha %0.2f trabalhando %d Horas por semana \n", result, val1);
        break;
default:
		printf("Erro impediu o calculo!\n");
		break;
}
return(0);
}
