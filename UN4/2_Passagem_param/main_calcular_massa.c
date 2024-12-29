#include<stdio.h>

/**
 * Desafio Proposto:
 * 
 * Implementar uma solução para auxiliar uma equipe de química no cálculo da massa resultante de uma reação química.
 * O programa deve:
 * - Solicitar ao usuário a quantidade em mol dos componentes A e B.
 * - Calcular a massa total da reação utilizando uma função que leva em consideração as massas molares dos componentes.
 * - Exibir os valores de referência fornecidos e a massa calculada.
 * 
 * Objetivo:
 * Demonstrar o uso de funções, manipulação de constantes e cálculos químicos básicos em C.
 */

/**
 * Função para calcular a massa total da reação química.
 * 
 * @param a Quantidade em mol do componente A.
 * @param b Quantidade em mol do componente B.
 * @return A massa total do composto resultante em g/mol.
 */
float calcularMassa(float a, float b) {
    // Massas molares dos componentes A e B
    const float mA = 321.43;
    const float mB = 150.72;

    // Exibe valores de referência fornecidos
    printf("\nReferências: mol A : mol B");
    printf("\n1,2 : 1,0 \t= %f g/mol", 1.2 * mA + 1 * mB);
    printf("\n1,4 : 1,0 \t= %f g/mol", 1.4 * mA + 1 * mB);
    printf("\n1,6 : 1,0 \t= %f g/mol", 1 * mA + 1.6 * mB);

    // Calcula a massa total com base nas quantidades em mol
    return (a * mA) + (b * mB);
}


int main() {
    float a = 0, b = 0, resultado = 0;

    // Solicita ao usuário as quantidades em mol dos componentes A e B
    printf("\nDigite as quantidades em mol dos elementos A e B: ");
    scanf("%f %f", &a, &b);

    // Chama a função calcularMassa para obter o resultado
    resultado = calcularMassa(a, b);

    // Exibe a massa total calculada
    printf("\n\nMassa final do composto = %.2f g/mol\n", resultado);

    return 0;
}