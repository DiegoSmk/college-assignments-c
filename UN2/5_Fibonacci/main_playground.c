#include <stdio.h>
#include <time.h>

// Função para calcular o x-ésimo elemento da sequência de Fibonacci
unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n; // Retorna diretamente 0 ou 1 para os dois primeiros casos
    }
    
    unsigned long long a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b; // Próximo número na sequência
        a = b;        // Atualiza o valor de a
        b = temp;     // Atualiza o valor de b
    }
    return b; // Retorna o n-ésimo número de Fibonacci
}

int main() {
    int x;
    printf("Digite a posição desejada na sequência de Fibonacci: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("A posição deve ser um número inteiro não negativo.\n");
        return 1;
    }

    // Medir o tempo de execução
    clock_t inicio = clock(); // Marca o início do tempo
    unsigned long long resultado = fibonacci(x);
    clock_t fim = clock(); // Marca o fim do tempo

    // Calcula o tempo de execução
    double tempoExecucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Exibe o resultado e o tempo de execução
    printf("O %dº elemento da sequência de Fibonacci é: %llu\n", x, (unsigned long long) resultado);
    printf("Tempo de execução: %.8f segundos\n", tempoExecucao);

    return 0;
}