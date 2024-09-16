#include <stdio.h>

int main() {
    int opcao;
    int numero;
    int i;

    do {
        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o numero para gerar a tabuada: ");
            scanf("%d", &numero);

            printf("\nTabuada de %d:\n", numero);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else if (opcao != 2) {
            printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }

    } while (opcao != 2);

    printf("Saindo...\n");

    return 0;
}
