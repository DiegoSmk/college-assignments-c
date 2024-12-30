#include <stdio.h>


/**
 * @struct Conta
 * @brief Representa uma conta bancária.
 * 
 * @var Conta::numero
 * Número da conta.
 * 
 * @var Conta::titular
 * Nome do titular da conta.
 * 
 * @var Conta::saldo
 * Saldo disponível na conta.
 */
struct Conta {
    int numero;
    char titular[50];
    float saldo;
};


/**
 * @brief Realiza um depósito em uma conta bancária.
 *
 * Esta função adiciona um valor ao saldo de uma conta bancária, desde que o valor seja positivo.
 *
 * @param conta Ponteiro para a estrutura da conta bancária.
 * @param valor Valor a ser depositado na conta. Deve ser maior que zero.
 */
void realizarDeposito(struct Conta *conta, float valor) {
    if (valor <= 0) {
        printf("Valor de deposito invalido!\n");
        return;
    }
    conta->saldo += valor;
    printf("Deposito de R$%.2f realizado com sucesso!\n", valor);
}

/**
 * @brief Realiza um saque na conta especificada.
 *
 * Esta função realiza um saque na conta fornecida, subtraindo o valor do saldo
 * da conta se houver saldo suficiente. Caso contrário, uma mensagem de erro é
 * exibida.
 *
 * @param conta Ponteiro para a estrutura da conta onde o saque será realizado.
 * @param valor Valor a ser sacado da conta.
 * @return int Retorna 1 se o saque for bem-sucedido, ou 0 se o saque for mal-sucedido.
 */
int realizarSaque(struct Conta *conta, float valor) {
    if (valor <= 0) {
        printf("Valor de saque invalido!\n");
        return 0; // Saque mal-sucedido
    }
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de R$%.2f realizado com sucesso!\n", valor);
        return 1; // Saque bem-sucedido
    } else {
        printf("Saldo insuficiente para realizar o saque.\n");
        return 0; // Saque mal-sucedido
    }
}

/**
 * @brief Realiza a transferência de um valor entre duas contas bancárias.
 *
 * Esta função tenta realizar a transferência de um valor da conta de origem
 * para a conta de destino. Primeiro, verifica se o valor da transferência é
 * válido (maior que zero). Em seguida, tenta realizar o saque da conta de
 * origem. Se o saque for bem-sucedido, realiza o depósito na conta de destino.
 * 
 * @param origem Ponteiro para a estrutura da conta de origem.
 * @param destino Ponteiro para a estrutura da conta de destino.
 * @param valor Valor a ser transferido.
 * @return int Retorna 1 se a transferência for bem-sucedida, ou 0 se for mal-sucedida.
 */
int realizarTransferencia(struct Conta *origem, struct Conta *destino, float valor) {
    if (valor <= 0) {
        printf("Valor de transferencia invalido!\n");
        return 0; // Transferência mal-sucedida
    }
    if (realizarSaque(origem, valor)) {  // Tenta realizar o saque da conta origem
        realizarDeposito(destino, valor);  // Se o saque for bem-sucedido, realiza o depósito na conta destino
        printf("Transferencia de R$%.2f de Conta %d para Conta %d realizada com sucesso!\n", valor, origem->numero, destino->numero);
        return 1; // Transferência bem-sucedida
    } else {
        printf("Transferencia mal-sucedida.\n");
        return 0; // Transferência mal-sucedida
    }
}

int main() {
    // Criação de duas instâncias da estrutura Conta
    struct Conta contas[2] = {{1, "Cliente1", 1000.0}, {2, "Cliente2", 500.0}};
    int op, cc, cc2;
    float valor = 0;

    do {
        printf("\n BOLSOFURADO BANK \n\n");

        printf(" Saldo Conta 1: R$%.2f\n", contas[0].saldo);
        printf(" Saldo Conta 2: R$%.2f\n\n", contas[1].saldo);

        printf(" 1 - Deposito\n");
        printf(" 2 - Saque\n");
        printf(" 3 - Transferencia\n");
        printf(" 4 - Sair\n");

        printf("\n Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\n Qual a conta para deposito? ");
                scanf("%d", &cc);
                printf(" Qual o valor? ");
                scanf("%f", &valor);
                realizarDeposito(&contas[cc - 1], valor);
                break;

            case 2:
                printf("\n Qual a conta para saque? ");
                scanf("%d", &cc);
                printf(" Qual o valor? ");
                scanf("%f", &valor);
                realizarSaque(&contas[cc - 1], valor);
                break;

            case 3:
                printf("\n Qual a conta de origem? ");
                scanf("%d", &cc);
                printf(" Qual a conta de destino? ");
                scanf("%d", &cc2);
                printf(" Qual o valor? ");
                scanf("%f", &valor);
                realizarTransferencia(&contas[cc - 1], &contas[cc2 - 1], valor);
                break;

            case 4:
                printf("Saindo... Obrigado por usar o BOLSOFURADO BANK!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (op != 4);

    return 0;
}
