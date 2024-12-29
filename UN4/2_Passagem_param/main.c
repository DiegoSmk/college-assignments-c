#include<stdio.h>

int fatorial (int n) {
    int res = 1;

    if (n == 0) {
        return res;
    }

    for (int i = n; i > 1; i--) {
        res = res * i;
    }

    return res;
}

int main () {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido\n");
        return 1;
    }

    printf("Fatorial de %d e %d\n", numero, fatorial(numero));

    return 0;
}