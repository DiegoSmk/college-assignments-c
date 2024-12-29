#include<stdio.h>

float calcularMassa(float quantidadeA, float quantidadeB) {
    const float mA = 321.43;

    const float mB = 150.72;

    printf("\n mol A : mol B ");

    printf("\n 1,2 : 1,0 \t= %f",1.2*mA + 1*mB);

    printf("\n 1,4 : 1,0 \t= %f",1.4*mA + 1*mB);

    printf("\n 1,6 : 1,0 \t= %f",1*mA + 1.6*mB);

    return (quantidadeA * mA ) + (quantidadeB * mB);

};

int main() {
    float quantidadeA = 0, quantidadeB = 0;
    float resultado = 0;

    printf("Digite a quantidade de A: ");
    scanf("%f", &quantidadeA);

    printf("Digite a quantidade de B: ");
    scanf("%f", &quantidadeB);

    resultado = calcularMassa(quantidadeA, quantidadeB);

    printf("\n\n A massa final do composto e %.2f g/mol\n ", resultado);

    return 0;
};