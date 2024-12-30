#include <stdio.h>

/**
 * Função recursiva para converter um número decimal em binário.
 *
 * @param decimal Número inteiro decimal a ser convertido.
 */
void decimalParaBinario(int decimal) {
    // A recursão continua até que o número decimal seja maior que 0.
    if (decimal > 0) {
        // Chama a função novamente dividindo o número por 2 (divisão inteira).
        decimalParaBinario(decimal / 2);

        // Após a chamada recursiva, imprime o resto da divisão por 2 (0 ou 1).
        printf("%d", decimal % 2);
    }
}

int main() {
    int numeroDecimal;

    // Solicita ao usuário que insira um número decimal.
    printf("\nDigite um número decimal: ");
    scanf("%d", &numeroDecimal);

    // Verifica se o número digitado é válido (não-negativo).
    if (numeroDecimal >= 0) {
        printf("\nO número %d em binário é: ", numeroDecimal);

        // Caso o número seja 0, imprime 0 diretamente, pois a função não é chamada para valores <= 0.
        if (numeroDecimal == 0) {
            printf("0");
        } else {
            // Chama a função para realizar a conversão.
            decimalParaBinario(numeroDecimal);
        }
        printf("\n\n");
    } else {
        // Mensagem de erro para valores inválidos.
        printf("\nO número digitado é inválido! Apenas números não-negativos são permitidos.\n");
    }

    return 0;
}