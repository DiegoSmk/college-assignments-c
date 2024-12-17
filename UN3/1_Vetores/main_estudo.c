#include <stdio.h>

int main() {
    // Definindo as variáveis (strings)
    char nome[16]; // String para armazenar o nome, com limite de 15 caracteres + '\0'
    char sobrenome[31]; // String para o sobrenome, com limite de 30 caracteres + '\0'
    char frase[101]; // String para armazenar uma frase, com limite de 100 caracteres + '\0'

    // Demonstração de como utilizar o scanf para ler uma string simples
    printf("Digite um nome simples (sem espacos): ");
    scanf("%s", nome);  // Lê o nome até o primeiro espaço, ou seja, uma palavra simples.
    
    // Exibe o nome digitado
    printf("\nNome digitado: %s\n", nome); 

    // Lembre-se que o scanf lê até o primeiro espaço, ou seja, se o nome contiver espaços, 
    // ele não funcionará corretamente. Vamos ver como tratar isso usando fgets.

    // Agora, vamos ler o sobrenome com o fgets
    printf("Digite o seu sobrenome (pode conter espacos): ");
    fflush(stdin);  // Limpa o buffer de entrada (isso é útil quando usamos fgets após scanf).
    fgets(sobrenome, 31, stdin);  // Lê o sobrenome, permitindo espaços. 
                                 // O segundo parâmetro (31) limita a quantidade de caracteres a serem lidos.

    // Exibe o sobrenome digitado
    printf("\nSobrenome digitado: %s\n", sobrenome);

    // Exibe o nome completo (nome + sobrenome)
    printf("\nNome completo: %s %s\n", nome, sobrenome);

    // A função fgets também coloca o '\n' no final da string, o que pode ser inconveniente em alguns casos.
    // Para remover o '\n', podemos utilizar o seguinte código:

    // Remover o '\n' no final da string, se presente
    int i = 0;
    while (sobrenome[i] != '\0') {
        if (sobrenome[i] == '\n') {
            sobrenome[i] = '\0';  // Substitui o '\n' por '\0'
            break;  // Interrompe o laço após remover o '\n'
        }
        i++;
    }

    // Agora, vamos ler uma frase inteira, que pode conter espaços.
    printf("Digite uma frase (pode conter espacos): ");
    fgets(frase, 101, stdin);  // Lê a frase inteira, permitindo espaços.

    // Exibe a frase digitada
    printf("\nFrase digitada: %s\n", frase);

    // Fim do programa
    return 0;
}
