#include <stdio.h>

// Aula 5 - Outro exemplo de Operador ternário
int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    (num == 10) ? printf("O numero e igual a 10.\n") : printf("O numero e diferente de 10.\n");

    return 0; 
}