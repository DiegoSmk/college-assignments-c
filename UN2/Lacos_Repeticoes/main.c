#include <stdio.h>

// Funções auxiliares
void runWithFor(int n);
void runWithWhile(int n);
void runWithDoWhile(int n);
void aula();

int main() {
    // Declaração de variáveis
    int n;

    // Solicita ao usuário para digitar o número de repetições
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo
    if (n <= 0) {
        printf("Por favor, insira um número positivo.\n");
        return 1; // Termina o programa com erro
    }

    // Executa os exemplos
    printf("\nExecutando com FOR:\n");
    runWithFor(n);

    printf("\nExecutando com WHILE:\n");
    runWithWhile(n);

    printf("\nExecutando com DO-WHILE:\n");
    runWithDoWhile(n);

    printf("\nExecutando codigo da aula:\n");
    aula();

    return 0; // Termina o programa com sucesso
}

// Exemplo com FOR
void runWithFor(int n) {
    for (int i = 1; i <= n; i++) {
        printf("Repetição %d\n", i);
    }
}

// Exemplo com WHILE
void runWithWhile(int n) {
    int i = 1; // Inicializa a variável
    while (i <= n) {
        printf("Repetição %d\n", i);
        i++; // Incrementa a variável
    }
}

// Exemplo com DO-WHILE
void runWithDoWhile(int n) {
    int i = 1; // Inicializa a variável
    do {
        printf("Repetição %d\n", i);
        i++; // Incrementa a variável
    } while (i <= n);
}

// Exemplo aula
void aula() {
    int res, x = 1;

    while (x <= 10)
    {
        res = 2 * x;
        printf("%d\n", res);
        x = x + 1;
    }
}