#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

        setlocale(LC_ALL, "Portuguese");
        float minsal, salario;

        printf("Digite seu Salário: ");
        scanf("%f", &salario);

        if(salario > 2000.00) {
                minsal = ((salario) + (salario*0.08));
                printf("Recebe mais de R$2000 por mês, seu salario aumanta para 8%% a mais, valor final: %0.2f\n", minsal);
        } else if (salario>=1200.00 && salario<2000.00) {
                minsal = ((salario) + (salario*0.15));
                printf("Recebe entre R$1200 a R$2000 por mês, seu salario aumanta para 15%% a mais, valor final: %0.2f\n", minsal);
        } else {
                minsal = ((salario) + (salario*0.20));
                printf("Recebe menos de R$1200 por mês, seu salario aumanta para 20%% a mais, valor final: %0.2f\n", minsal);
        }
}