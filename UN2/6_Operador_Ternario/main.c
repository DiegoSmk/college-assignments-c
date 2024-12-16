#include <stdio.h>

// Aula 5 - Outro exemplo de Operador ternário
int main() {
    float salario;
    printf("Qual o salario: ");
    scanf("%f", &salario);

    // IF - ELSE
    // if (salario > 1000) {
    //     salario *= 1.05;
    // } else {
    //     salario *= 1.07;
    // }

    // OPERADOR TERNÁRIO
    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;

    printf("Novo salario: %.2f\n", salario);
}