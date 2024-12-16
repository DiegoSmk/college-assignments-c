#include <stdio.h>

/* Faça um programa em C que calcula a idade média de um grupo de pessoas.
A finalização de entrada de números é dada por um 0.
O programa não deve aceitar idades negativas. */

int main() {
    int idade, soma = 0, contPessoas = 0;

    printf("Este programa calcula a média das idades de um grupo de pessoas.\n");
    printf("Digite as idades (digite 0 para encerrar):\n");

    while (1) {
        printf("Idade: ");
        
        // Verificando se a entrada é um número válido
        if (scanf("%d", &idade) != 1) {
            printf("Entrada inválida! Por favor, insira um número inteiro.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue; // Solicita novamente a entrada
        }

        if (idade == 0) {
            break; // Encerra o laço se o usuário digitar 0
        }

        if (idade < 0) {
            printf("Idade negativa não é válida! Tente novamente.\n");
            continue; // Ignora a entrada negativa e pede novamente
        }

        soma += idade;   // Soma a idade informada
        contPessoas++;   // Conta o número de pessoas válidas
    }

    if (contPessoas > 0) {
        // Calcula a média das idades
        float media = (float)soma / contPessoas;
        printf("A média das idades é: %.2f\n", media);
    } else {
        printf("Nenhuma idade válida foi fornecida.\n");
    }

    return 0;
}