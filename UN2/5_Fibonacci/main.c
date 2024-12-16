#include <stdio.h>

/* O problema
Você trabalha em um projeto de análise de crescimento
populacional e precisa calcular a sequência de Fibonacci
para prever o número de indivíduos em uma população de coelhos
ao longo do tempo. */

/* A sequência de Fibonacci é amplamente utilizada em modelagem
matemática para representar o crescimento populacional */

/* Você deve elaborar um programa em C que, a partir de uma
entrada n, exiba os n primeiros termos da sequência de
Fibonacci. */ 

int main() {

    int n;

    int primeiro = 0, segundo = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci que você deseja calcular: ");

    scanf("%d", &n);

    printf("Sequência de Fibonacci até o termo %d:\n", n);

    for (int i = 0; i < n; i++) {

        if (i <= 1) {

            proximo = i;

        } else {

            proximo = primeiro + segundo;

            primeiro = segundo;

            segundo = proximo;

        }

        printf("%d ", proximo);

    }

    return 0;

}