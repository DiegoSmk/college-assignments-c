#include <stdio.h>
#include <math.h>

/**
 * DESAFIO PROPOSTO:
 * Desenvolver um programa que calcule a raiz quadrada de um número utilizando o método iterativo de Newton.
 * O programa deve solicitar ao usuário um número positivo, definir um chute inicial (metade do valor informado) 
 * e utilizar um critério de parada (diferença menor que 0.001 entre estimativas consecutivas). 
 * A solução deve ser implementada por meio de uma função recursiva que refine a estimativa até atingir a precisão desejada.
 */

/**
 * Função recursiva para calcular a raiz quadrada de um número usando o método de Newton.
 *
 * @param n Número cujo a raiz quadrada será calculada.
 * @param raizAnt O valor da raiz calculada na iteração anterior (chute inicial na primeira chamada).
 * @return A raiz quadrada aproximada de n.
 */
float calcularRaiz(float n, float raizAnt) {
    // Calcula a nova estimativa da raiz com base na fórmula do método de Newton.
    float raiz = (pow(raizAnt, 2) + n) / (2 * raizAnt);

    // Verifica se a diferença entre a nova estimativa e a anterior está abaixo do critério de parada.
    if (fabs(raiz - raizAnt) < 0.001) {
        return raiz; // Critério de parada atingido, retorna a raiz aproximada.
    }

    // Caso contrário, chama a função novamente com a nova estimativa.
    return calcularRaiz(n, raiz);
}

int main() {
    float numero, raiz;

    // Solicita ao usuário o número para o qual será calculada a raiz quadrada.
    printf("\nDigite um numero para calcular a raiz quadrada: ");
    scanf("%f", &numero);

    // Valida a entrada do usuário. Apenas números positivos são permitidos.
    if (numero <= 0) {
        printf("\nNumero invalido! Por favor, insira um numero positivo.\n");
        return 1; // Encerra o programa com erro.
    }

    // Inicia o cálculo da raiz, utilizando a metade do número como chute inicial.
    raiz = calcularRaiz(numero, numero / 2);

    // Exibe o resultado final da raiz quadrada calculada.
    printf("\nA raiz quadrada aproximada de %.2f e: %.5f\n", numero, raiz);

    return 0;
}
