#include <stdio.h>

/**
 * Desafio Proposto:
 * 
 * Implementar uma solução para ajudar um amigo que possui uma loja a calcular o preço total de compras realizadas por clientes.
 * A solução deve permitir que o usuário insira o número de itens comprados, o preço unitário de cada item e a quantidade adquirida.
 * Além disso, o cálculo do preço total deve ser realizado utilizando a passagem de parâmetros por referência.
 * 
 * Objetivo principal:
 * Demonstrar o conhecimento sobre manipulação de arrays, laços de repetição e passagem de parâmetros por referência em C.
 */

/**
 * Função para calcular o preço total da compra.
 * 
 * @param precoUnitario Array com os preços unitários dos itens.
 * @param quantidade Array com as quantidades de cada item.
 * @param numItens Número total de itens comprados.
 * @param precoTotal Ponteiro para armazenar o preço total calculado.
 */
void calcularPrecoTotal(float precoUnitario[], int quantidade[], int numItens, float *precoTotal) {
    // Inicializa o preço total como 0
    *precoTotal = 0;

    // Itera sobre os itens para calcular o preço total
    for (int i = 0; i < numItens; i++) {
        // Soma o preço total de cada item (preço unitário x quantidade)
        *precoTotal += precoUnitario[i] * quantidade[i];
    }
}

int main() {
    int numItens;

    // Solicita ao usuário o número de itens comprados
    printf("Digite o numero de itens comprados: ");
    scanf("%d", &numItens);

    // Declara arrays para armazenar os preços unitários e as quantidades
    float precoUnitario[numItens];
    int quantidade[numItens];

    // Variável para armazenar o preço total
    float precoTotal;

    // Entrada de dados: preços unitários e quantidades
    for (int i = 0; i < numItens; i++) {
        printf("\nDigite o preco unitario do item %d: ", i + 1);
        scanf("%f", &precoUnitario[i]);

        printf("Digite a quantidade do item %d: ", i + 1);
        scanf("%d", &quantidade[i]);
    }

    // Chama a função para calcular o preço total
    calcularPrecoTotal(precoUnitario, quantidade, numItens, &precoTotal);

    // Exibe o preço total da compra
    printf("\nPreco total da compra: R$ %.2f\n\n", precoTotal);

    return 0;
}