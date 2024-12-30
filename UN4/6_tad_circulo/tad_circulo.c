#include "tad_circulo.h"
#include <stdio.h>

/**
 * @file tad_circulo.c
 * @brief Implementação das funções do TAD Círculo.
 * 
 * Este arquivo contém a implementação das operações definidas em `tad_circulo.h`,
 * incluindo a inicialização de um círculo e o cálculo de sua área.
 */

/**
 * @brief Inicializa os valores de um círculo.
 * 
 * Atribui valores às coordenadas do centro (x, y) e ao raio de um círculo.
 * 
 * @param circ Ponteiro para a estrutura do círculo que será inicializada.
 * @param x Coordenada X do centro do círculo.
 * @param y Coordenada Y do centro do círculo.
 * @param raio Valor do raio do círculo.
 */
void inicializa(Circulo *circ, float x, float y, float raio) {
    circ->x = x;      // Define a coordenada X do centro
    circ->y = y;      // Define a coordenada Y do centro
    circ->raio = raio; // Define o raio do círculo
}

/**
 * @brief Calcula a área de um círculo.
 * 
 * Retorna a área de um círculo com base em seu raio. 
 * Fórmula utilizada: área = π * raio²
 * 
 * @param circ Ponteiro para a estrutura do círculo.
 * @return Área do círculo como um número de ponto flutuante.
 */
float calculaArea(Circulo *circ) {
    return 3.14 * circ->raio * circ->raio; // Fórmula para calcular a área
}