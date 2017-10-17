#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int val1;

printf("Tipos de chamado.\n");
printf("Digitar 1: Contas.\n");
printf("Digitar 2: Problemas técnicos;\n");
printf("Digitar 3: Reclamações.\n");
printf("Digitar 4: Falar com atendente.\n");
printf("Digitar 0: Sair.\n");
printf("Digite o valor correspondente a seu chamado: ");
scanf("%d", &val1);

switch(val1) {
case 1:
        printf("Abrindo registro de contas.\n");
        break;
case 2:
        printf("Chamando DP.Técnico.\n");
        break;
case 3:
        printf("Abrindo uma reclamação\n");
        break;
case 4:
        printf("Requisitando um atendente.\n");
        break;
case 0:
        printf("Saindo...\n");
        exit(0);
        break;
default:
	printf("Erro! Entrada incorreta.\n");
	break;
}        
return(0);
}
