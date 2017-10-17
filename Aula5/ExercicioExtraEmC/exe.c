#include <stdio.h>
#include <locale.h>
int main() {

int temp;

printf("Digite a temperatura: ");
scanf("%d", &temp);

switch(temp){
case 1 ... 10:
	printf("Esta frio!, Tá menos de %d\n", temp);
	break; 
case 11 ... 20:
	printf("Tá meio frio!, Tá mais ou menos de %d\n", temp);
	break;
case 21 ... 30:
	printf("Esta Quente!, Tá mais ou menos de %d\n", temp);
	break;
}
return(0);
}