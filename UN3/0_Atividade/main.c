#include <stdio.h>

int main() {
    // Declaração de um vetor para armazenar as vendas de 5 dias
    int vendas[5];
    int soma = 0; // Variável para armazenar a soma das vendas

    // Solicitação de entrada dos valores
    printf("Digite as vendas realizadas em 5 dias:\n");
    for (int i = 0; i < 5; i++) {
        printf("Vendas do dia %d: ", i + 1);
        scanf("%d", &vendas[i]); // Armazena os valores no vetor
        soma += vendas[i];       // Soma os valores durante a entrada
    }

    // Exibição dos valores armazenados no vetor
    printf("\nQuantidade de vendas por dia:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dia %d: %d vendas\n", i + 1, vendas[i]);
    }

    // Exibição da soma total das vendas
    printf("\nSoma total de vendas: %d\n", soma);

    return 0;
}