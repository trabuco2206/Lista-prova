#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opcao;
    int numero;

    do {
        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero inteiro nao negativo: ");
                scanf("%d", &numero);

                if (numero < 0) {
                    printf("Erro: O fatorial nao e definido para numeros negativos.\n");
                } else {
                    printf("O fatorial de %d e: %llu\n", numero, fatorial(numero));
                }
                break;

            case 2:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção invalida. Por favor, escolha uma opcao valida.\n");
                break;
        }

    } while (opcao != 2);

    return 0;
}
