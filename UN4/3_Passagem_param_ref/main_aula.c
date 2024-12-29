#include<stdio.h>

void dobrar(int *numero) {
    // *numero = *numero * 2;
    *numero *= 2;
};

int main() {
    int valor = 5;
    
    printf("Valor antes de dobrar: %d\n", valor);
    dobrar(&valor);
    printf("Valor depois de dobrar: %d\n", valor);


    return 0;
}