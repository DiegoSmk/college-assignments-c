#include "tad_circulo.h"
#include <stdio.h>

/**
 * @file main.c
 * @brief Programa principal para utilizar o TAD Círculo.
 * 
 * Este programa demonstra o uso das funções do TAD Círculo, incluindo a inicialização
 * de uma estrutura `Circulo` e o cálculo de sua área. Ele exibe o resultado no console.
 */

int main(void) {
    Circulo a;         // Declaração de uma instância da estrutura Circulo
    float res;         // Variável para armazenar o resultado da área

    // Inicializa o círculo com centro (0, 0) e raio 1
    inicializa(&a, 0, 0, 1);

    // Calcula a área do círculo inicializado
    res = calculaArea(&a);

    // Exibe a área do círculo no console
    printf("Area: %.2f\n", res);

    return 0; // Indica execução bem-sucedida
}