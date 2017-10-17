#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

float val1, val2;
char opera;

printf("Digite o primeiro valor: ");
scanf("%f", &val1);
printf("Digite o primeiro valor: ");
scanf("%f", &val2);
printf("Digite o Operador(+,-,*,/): ");
scanf(" %c", &opera);

switch(opera) {
case '+':
        printf("%0.2f\n\n", val1 + val2);
        break;
case '-':
        printf("%0.2f\n\n", val1 - val2);
        break;
case '*':
        printf("%0.2f\n\n", val1 * val2);
        break;
case '/':
        printf("%0.2f\n\n", val1 / val2);
        break;
default:
		printf("Operador não existe.\n");
		break;
}
return(0);
}
