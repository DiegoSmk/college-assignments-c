#include <stdio.h>

// break vs continue
int main() {
    // Demonstrando o uso do 'break'
    // O 'break' encerra completamente o laço atual quando a condição especificada é atendida.
    // Neste caso, o laço será interrompido na primeira vez que 'i % 10 == 0'.
    printf("Exemplo do uso do 'break':\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 0) { // Quando 'i' for múltiplo de 10, o laço será encerrado.
            break;
        }
        printf("%d\n", i); // Exibe os números até o 'break' ser acionado.
    }

    printf("\n");

    // Demonstrando o uso do 'continue'
    // O 'continue' pula a iteração atual e segue para a próxima iteração do laço.
    // Neste caso, sempre que 'i % 10 == 0', o número será ignorado.
    printf("Exemplo do uso do 'continue':\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 0) { // Quando 'i' for múltiplo de 10, a iteração é ignorada.
            continue;
        }
        printf("%d\n", i); // Exibe os números, exceto os múltiplos de 10.
    }

    return 0;
}
