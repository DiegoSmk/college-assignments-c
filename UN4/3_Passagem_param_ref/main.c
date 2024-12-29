#include<stdio.h>

// Estrutura para representar uma conta bancária
struct Conta
{
    int numero;
    float saldo;
};

// Function prototypes (declarações)
void troca(int *a, int *b);
void incremento(int *num);
void imprime(int *arr, int tamanho);
void multiplicaMatriz(int matriz[3][3], int escalar);
void zerarSaldo(struct Conta *conta);


int main()
{
    int x = 10, y = 20;

    /**
     * Exemplo 1 - Troca de valores
     */
    printf("\n\n Exemplo 1 - Troca de valores\n");
    printf("Antes: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    /**
     * Exemplo 2 - Incremento de valores
     */
    printf("\n\n Exemplo 2 - Incremento de valores\n");
    int numero = 5;
    printf("Antes: numero = %d\n", numero);
    incremento(&numero); // Nome corrigido para 'incremento'
    printf("Depois: numero = %d\n", numero);

    /**
     * Exemplo 3 - Passagem de vetores
     */
    printf("\n\n Exemplo 3 - Passagem de array\n");
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    imprime(arr, tamanho);

    /**
     * Exemplo 4 - Passagem de matrizes
     */
    printf("\n\n Exemplo 4 - Passagem de matrizes\n");
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    multiplicaMatriz(matriz, 2);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    /**
     * Exemplo 5 - Passagem de Strouct
     */
    printf("\n\n Exemplo 5 - Passagem de Strouct\n");
    struct Conta conta = {123, 1000.0};
    printf("Antes: Saldo = %.2f\n", conta.saldo);
    zerarSaldo(&conta);
    printf("Depois: Saldo = %.2f\n", conta.saldo);

    return 0;
}

// Exemplo 1 - Troca de valores 
void troca(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Exemplo 2 - Incremento de valores
void incremento(int *num)
{
    (*num)++;
}

// Exemplo 3 - Passagem de vetores
// pode ser *vetor ou vetor[]
// não usa & pois vetor já é um ponteiro
void imprime(int *vetor, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Exemplo 4 - Passagem de matrizes
// matriz[3][3] é o mesmo que matriz[][3]
// não usa & pois matriz já é um ponteiro
void multiplicaMatriz(int matriz[3][3], int escalar)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] *= escalar;
        }
    }
}

// Exemplo 5 - Passagem de Strouct
void zerarSaldo(struct Conta *conta)
{
    conta->saldo = 0;
}