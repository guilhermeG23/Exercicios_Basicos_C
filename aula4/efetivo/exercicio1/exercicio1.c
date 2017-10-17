#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

        setlocale(LC_ALL, "Portuguese");
        float peso, altura, imc;

        printf("Digite seu Peso: ");
        scanf("%f", &peso);

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        if(imc>=40.0) {
                printf("Obesidade classe III, com IMC de: %0.2f\n", imc);
        } else if (imc>=35.0 && imc<=39.9) {
                printf("Obesidade classe II, com IMC de: %0.2f\n", imc);
        } else if (imc>=30.0 && imc<=34.9) {
                printf("Obesidade classe I, com IMC de: %0.2f\n", imc);
        } else if (imc>=25.0 && imc<=29.9) {
                printf("Excesso de Peso, com IMC de: %0.2f\n", imc);
        } else if (imc>=18.5 && imc<=24.9) {
                printf("Peso normal, com IMC de: %0.2f\n", imc);
        } else {
                printf("Abaixo do peso normal, com o IMC de: %0.2f\n", imc);
        }

        return 0;
}
