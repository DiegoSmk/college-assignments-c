#include <stdio.h>

/* Escreva um programa que declare um vetor de inteiros e um
ponteiro para inteiros. Em seguida, associar o ponteiro ao vetor
e somar mais dez (+10) a cada posição do vetor usando o ponteiro
com aritmética de ponteiros.  */

int main() {

    int vetor[5] = {1, 2, 3, 4, 5};

    int *ponteiro = vetor; // Associando o ponteiro ao vetor

    for (int i = 0; i < 5; i++) {

        *(ponteiro + i) += 10;

    }

    printf("Elementos do vetor após adicionar 10:\n");

    for (int i = 0; i < 5; i++) {

        printf("%d ", vetor[i]);

    }

    printf("\n");

    return 0;

}