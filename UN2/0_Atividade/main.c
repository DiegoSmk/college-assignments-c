/*
 ============================================================================
 Nome do Projeto : Somador de Números Inteiros
 Autor           : Diego Pena
 Data de Criação : 16/12/2024
 Versão          : 1.0
 Descrição       : Este programa lê números inteiros do usuário e calcula
                   a soma de todos os números inseridos. O loop continua
                   até que o usuário insira o número zero, que encerra
                   o programa e exibe o resultado final da soma.
 Licença         : MIT License
 ============================================================================
 */
 
#include <stdio.h>

int main() {
    int numero, soma = 0;
    char buffer;

    printf("Bem-vindo ao somador de números!\n");
    printf("Digite números inteiros para somar. Digite 0 para encerrar.\n");

    // Estrutura de repetição while para somar números até que o usuário digite 0
    while (1) {
        printf("Digite um número: ");

        // Valida a entrada para garantir que apenas inteiros sejam aceitos
        if (scanf("%d%c", &numero, &buffer) != 2 || buffer != '\n') {
            printf("Entrada inválida! Apenas números inteiros são permitidos. Tente novamente.\n");
            while (getchar() != '\n'); // Limpa o buffer para evitar loops infinitos
            continue;
        }

        // Verifica a condição de parada
        if (numero == 0) {
            break; // Sai do loop se o número for zero
        }

        soma += numero; // Adiciona o número à soma
    }

    // Exibe o resultado final da soma
    printf("A soma dos números inseridos é: %d\n", soma);

    return 0;
}