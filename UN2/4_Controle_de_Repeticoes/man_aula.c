#include <stdio.h>

/* Faça um programa em C que calcula a idade média de um grupo de pessoas.
A finalização de entrada de números é dada por um 0.
O programa não deve aceitar idades negativas. */

int main() {
    int idade, soma = 0, contPessoas = 0;

    while(1) {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; // encerra o laço
        }

        if (idade < 0) {
            printf("Não existe idade negativa! Tente novamente... \n");
            continue;
        }

        soma += idade;
        contPessoas++;
    }

    if (contPessoas > 0) {
        float media = (float) soma / contPessoas;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi fornecida.\n");
    }


    return 0;
}