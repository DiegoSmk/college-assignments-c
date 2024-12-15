#include<stdio.h>

int main(){

    float valor_bruto=0;

    float valor_liquido=0;

    float desconto=0;

    int qtd_pessoas=0;

    printf("\n Digite o valor total da conta: ");

    scanf("%f",&valor_bruto);

    printf("\n Digite a quantidade de pessoas: ");

    scanf("%d",&qtd_pessoas);

    printf("\n Digite o desconto (em porcentagem): ");

    scanf("%f",&desconto);

valor_liquido = valor_bruto - (valor_bruto * desconto/100);

    printf("\n Valor da conta com desconto = %f",valor_liquido);

    printf("\n Valor a ser pago por pessoa = ");

    printf("\%f", valor_liquido/qtd_pessoas);

}