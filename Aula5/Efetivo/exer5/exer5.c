#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int val1, val2, result;
char opera;

printf("Digite a data de seu nascimento: ");
scanf("%d", &val1);
printf("Digite o ano atual: ");
scanf("%d", &val2);

result = val1 - val2;

switch(result) {
case 1 ... 3:
        printf("Bêbe. Sua idade: %d \n", result);
        break;
case 4 ... 13:
        printf("Criança. Sua idade: %d \n", result);;
        break;
case 14 ... 18:
        printf("Adolescente. Sua idade: %d \n", result);
        break;
case 19 ... 59:
        printf("Adulto. Sua idade: %d \n", result);
        break;
case 60 ... 100:
        printf("Idoso. Sua idade: %d \n", result);
        break;
default:
	printf("Você não nasceu e se nasceu tá velho pra caraio. Sua idade: %d \n", result);
	break;
}
return(0);
}
