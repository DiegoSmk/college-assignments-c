#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que gera 10 números aleatórios e retorna um ponteiro para o array estático
int* gerarRandomico() {

    static int r[10]; // Declaração de um array estático para armazenar os números gerados
    int a;

    // Loop para gerar 10 números aleatórios
    for (a = 0; a < 10; ++a) {
        r[a] = rand() % 100; // “% 100” limita os valores gerados a números entre 0 e 99
        printf("r[%d] = %d\n", a, r[a]); // Exibe o valor gerado para cada posição
    }

    return r; // Retorna o ponteiro para o array estático
}

int main() {

    int *p; // Ponteiro para armazenar o endereço do array retornado
    int i;  // Variável para o loop

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    p = gerarRandomico(); // Chama a função e armazena o ponteiro retornado

    // Loop para exibir os valores do array usando o ponteiro
    for (i = 0; i < 10; i++) {
        printf("\np[%d] = %d", i, *(p + i)); // Acessa os valores do array pelo ponteiro
    }

    return 0;
}