#include<stdio.h>
#include<stdlib.h>

int main() {
    int *vet = NULL;
    int tam = 0;

    vet = (int *) malloc(5 * sizeof(int));

    if (vet == NULL) 
    {
        printf("Falha na alocacao de memoria.\n");
        return 1; //Encerrar o programa com código de erro
    }

    printf("Vetor inicialmente alocado com sucesso.\n");

    for (int i = 0; i < 3; i++)
    {
        vet[tam] = i * 2;
        tam++;
    }

    printf("Elemento do vetor:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d", vet[i]);
    }
    printf("\n");

    // Realocar o array para acomodar mais elementos
    int novoTamanho = 10;
    vet = (int *) realloc(vet, novoTamanho * sizeof(int));

    if (vet == NULL)
    {
        printf("Falha na realocacao de memoria.\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("Vetor realocado com sucesso.\n");

    for (int i = 3; i < novoTamanho; i++)
    {
        vet[tam] = i * 2;
        tam++;
    }

    printf("Elementos do array apos realocacao:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d", vet[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(vet);
}