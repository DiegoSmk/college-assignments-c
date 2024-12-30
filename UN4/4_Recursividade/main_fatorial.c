#include <stdio.h>

/**
 * Função recursiva para calcular o fatorial de um número.
 * 
 * @param n Número inteiro não negativo.
 * @return O fatorial de n.
 */
int fatorial(int n) {
    // Caso base: fatorial de 0 ou 1 é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Passo recursivo: n * fatorial(n - 1)
    return n * fatorial(n - 1);
}

int main() {
    int numero;

    // Solicita ao usuário um número inteiro não negativo
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    // Valida a entrada para garantir que o número não seja negativo
    if (numero < 0) {
        printf("Erro: O fatorial nao e definido para numeros negativos.\n");
    } else {
        // Calcula e exibe o fatorial do número fornecido
        printf("O fatorial de %d e: %d\n", numero, fatorial(numero));
    }

    return 0;
}