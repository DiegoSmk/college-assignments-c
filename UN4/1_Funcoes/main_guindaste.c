#include <stdio.h>

/*
=====================================
        CALCULADORA DE GUINDASTE
=====================================
Este programa foi desenvolvido para ajudar a determinar qual modelo de guindaste 
(G1, G2 ou G3) deve ser utilizado com base no peso de uma coluna. 

FUNCIONAMENTO:
1. O usuário deverá inserir as dimensões da coluna: base, altura e comprimento.
2. O programa calculará o peso da coluna utilizando a fórmula: P = base * altura * comprimento * 25.
3. O modelo de guindaste será determinado com base nas seguintes condições:
   - Se o peso ≤ 500: Utilizar o modelo G1.
   - Se o peso > 1500: Utilizar o modelo G3.
   - Caso contrário: Utilizar o modelo G2.

Boa utilização!
=====================================
*/


// Função para calcular o peso do objeto com base nas dimensões fornecidas
int calcularPeso() {
    float base, altura, comprimento;

    // Solicita e lê a base do objeto
    printf("\nDigite o valor da base: ");
    scanf("%f", &base);

    // Solicita e lê a altura do objeto
    printf("\nDigite o valor da altura: ");
    scanf("%f", &altura);

    // Solicita e lê o comprimento do objeto
    printf("\nDigite o valor do comprimento: ");
    scanf("%f", &comprimento);

    // Calcula o peso do objeto e retorna como inteiro
    // Peso = base * altura * comprimento * 25
    return (int)(base * altura * comprimento * 25); 
}

int main() {
    int peso; // Variável para armazenar o peso calculado

    // Chama a função calcularPeso e armazena o resultado em 'peso'
    peso = calcularPeso();

    // Determina o modelo do guindaste com base no peso
    if (peso <= 500) {
        printf("\nO guindaste de modelo G1 deve ser usado.\n");
    } else if (peso > 1500) {
        printf("\nO guindaste de modelo G3 deve ser usado.\n");
    } else {
        printf("\nO guindaste de modelo G2 deve ser usado.\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}
