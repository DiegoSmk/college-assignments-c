#include <stdio.h>

/*
Implementar um programa em C que solicite ao usuário que insira o CPF no formato
"NNN.NNN.NNN-NN" e, em seguida, elimine os pontos e os traços para criar um CPF
sem formatação.
*/

int main() {
    char cpf1[15];   // Vetor para CPF formatado com pontos e traço
    char cpf2[12];   // Vetor para CPF sem formatação (11 dígitos + caractere nulo)

    printf("Digite seu CPF no formato NNN.NNN.NNN-NN: ");
    scanf("%14s", cpf1); // Limita a entrada para evitar estouro de buffer

    int n = 0; // Índice para preencher cpf2

    // Laço para percorrer todo o vetor cpf1
    for (int i = 0; i < 14; i++) {
        // Verifica se o caractere atual é um número
        if (cpf1[i] >= '0' && cpf1[i] <= '9') {
            cpf2[n] = cpf1[i];
            n++;
        }
    }

    cpf2[n] = '\0'; // Adiciona o caractere nulo para finalizar a string

    // Verifica se o CPF possui exatamente 11 dígitos
    if (n != 11) {
        printf("\nErro: CPF invalido! Certifique-se de que ele contenha 11 digitos.\n");
    } else {
        printf("\nCPF formatado sem pontos e tracos: %s\n", cpf2);
    }

    return 0;
}