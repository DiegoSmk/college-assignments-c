#include <stdio.h>

int main() {
    // Declara uma variável para armazenar um número
    int number;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &number);

    // Verifica se o número é positivo, negativo ou zero
    if (number > 0) {
        // Se o número for maior que zero, é positivo
        printf("O número %d é positivo.\n", number);
    } else if (number < 0) {
        // Se o número for menor que zero, é negativo
        printf("O número %d é negativo.\n", number);
    } else {
        // Caso nenhuma das condições anteriores seja verdadeira, o número é zero
        printf("O número é zero.\n");
    }

    return 0;
}