#include <stdio.h>

// Função para calcular o salário bruto
float calcular_salario_bruto(float valor_hora, int horas_trabalhadas) {
    return valor_hora * horas_trabalhadas;
}

// Função para calcular o desconto (9% do salário bruto)
float calcular_desconto(float salario_bruto) {
    return salario_bruto * 0.09;
}

// Função para calcular o salário líquido
float calcular_salario_liquido(float salario_bruto, float desconto) {
    return salario_bruto - desconto;
}

int main() {
    float valor_hora, salario_bruto, desconto, salario_liquido;
    int horas_trabalhadas;

    // Entrada: Solicita o valor da hora de trabalho e a quantidade de horas trabalhadas no mês
    printf("Digite o valor da sua hora de trabalho: ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &horas_trabalhadas);

    // Cálculos
    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    // Saída: Exibe o salário bruto, o desconto e o salário líquido
    printf("\nSalario Bruto: R$%.2f\n", salario_bruto);
    printf("Desconto (9%%): R$%.2f\n", desconto);
    printf("Salario Liquido: R$%.2f\n", salario_liquido);

    return 0;
}
