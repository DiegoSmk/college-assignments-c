#include <stdio.h>

/* Escrever um algoritimo que receba dois valores X e Z
e calcula e retorna X^Z (sem utilizar funções ou operadores
de potência prontos). */

// Função para calcular X^Z
long int calcularPotencia(int x, int z) {
    long int resultado = 1;

    // Calcula a potência usando multiplicações sucessivas
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }

    // Retorna o resultado da potência
    return resultado;
}

int main() {
    int x, z;

    // Solicita ao usuário os valores de X e Z
    printf("Digite o valor de X (base): ");
    scanf("%d", &x);

    printf("Digite o valor de Z (expoente): ");
    scanf("%d", &z);

    // Verifica se o expoente é negativo
    if (z < 0) {
        printf("Expoente negativo não suportado.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Chama a função para calcular a potência e exibe o resultado
    long int resultado = calcularPotencia(x, z);
    printf("%d elevado a %d é igual a %ld\n", x, z, resultado);

    return 0;
}